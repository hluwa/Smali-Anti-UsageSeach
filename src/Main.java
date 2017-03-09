import java.io.File;
import java.util.ArrayList;

import Native.JNINativeMethod;
import Native.NativeArray;
import Native.NativeHelper;
import Native.NativeMethod;
import Smali.SmaliClass;
import Smali.SmaliMethod;
import Smali.SmaliModifier;
import Smali.SmaliModifier.ModifierAttribute;
import Smali.SmaliModifier.ModifierPremission;
import Smali.SmaliUtils;

public class Main {
	public static void main(String args[]){
		
		SmaliClass cls = SmaliUtils.PraseClass(new File(args[0]));
		if(cls != null){
			SmaliClass.ClassTable.add(cls);
		}
		
		String methodArrayName = "MainArr";  //改随机名
		NativeHelper helper = NativeHelper.getInstance();
		NativeArray<JNINativeMethod> array = new NativeArray<JNINativeMethod>(cls.toString(),methodArrayName);
		ArrayList<SmaliMethod> smaliMethods = cls.getMethods();
		ArrayList<SmaliMethod> addMethod = new ArrayList<SmaliMethod>();
		for(int i = 0 ;i < smaliMethods.size() ; i++){
			SmaliMethod method = smaliMethods.get(i);
			String srcName = method.getName();
			if(method.isNative()){
				continue;
			}
			if(!"<init>".equals(srcName) && !"<clinit>".equals(srcName) ){
				String reName = srcName + "_after";  //改随机名
				method.rename(reName);
				NativeMethod nativeMethod = NativeMethod.smaliMethod2NativeMethod(method);  //nativeName改随机名
				helper.addMethod(nativeMethod);
				StringBuilder sig = new StringBuilder("(");
				for(String arg : method.getArgs()){
					sig.append(arg);
				}
				sig.append(")");
				sig.append(method.getReturnTypeStr());
				array.add(new JNINativeMethod(srcName,sig.toString(),NativeHelper.SmaliType2NativeType(method.getReturnTypeStr()),nativeMethod.getMethodName()));
				ArrayList<SmaliModifier> attributes = new ArrayList<SmaliModifier>();
				if(method.isStatic()){
					attributes.add(ModifierAttribute.ATTRIBUTE_STATIC);
				}
				attributes.add(ModifierAttribute.ATTRIBUTE_NATIVE);
				addMethod.add(new SmaliMethod(method.getPremission(),attributes,method.getArgs(),method.getReturnTypeStr(),method.getSuperClassStr(),srcName,-1));
			}
		}
		for(SmaliMethod method : addMethod){
			cls.addMethod(method, "");
		}
		ArrayList<SmaliModifier> attr = new ArrayList<SmaliModifier>();
		attr.add(ModifierAttribute.ATTRIBUTE_CONSTRUCTOR);
		SmaliMethod clinit = new SmaliMethod(ModifierPremission.PREMISSION_DEFAULT,attr,new ArrayList<String>(),"V",cls.toString(),"<clinit>",-1);
		StringBuilder codes = new StringBuilder();
		if(cls.findMethod(clinit) ==  null){
			codes.append("    .locals 1\r\n");
			codes.append("    const-string v0,\"smalisafe\"\r\n");
			codes.append("    invoke-static {v0}, Ljava/lang/System;->loadLibrary(Ljava/lang/String;)V\r\n");
			codes.append("    return-void\r\n");
		}
		cls.addMethod(clinit, codes.toString());
		cls.saveChange();
		helper.addJNIMethod(array);
		helper.setOnLoadCode(helper.createOnLoadCode());
		helper.writeSource();
	}
}
