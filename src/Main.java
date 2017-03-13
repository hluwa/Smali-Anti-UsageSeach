import java.io.File;
import java.util.ArrayList;

import Native.JNINativeMethod;
import Native.NativeArray;
import Native.NativeHelper;
import Native.NativeMethod;
import Smali.SmaliClass;
import Smali.SmaliMethod;
import Smali.SmaliModifier.ModifierAttribute;
import Smali.SmaliModifier.ModifierPremission;
import Smali.SmaliUtils;

public class Main {
	public static void main(String args[]){
		
		if(args[0].equals("-p")){
			if(args[2].equals("--f")){
				SafeProject(new File(args[1]),args[3]);
			}
			else{
				SafeProject(new File(args[1]),null);
			}
		}
		else if(args[0].equals("-s")){
			SafeSmali(new File(args[1]));
		}
		
		
	}
	
	public static void SafeSmali(File smaliFile){
		//解析Smali为SmaliClass类
		SmaliClass cls = SmaliUtils.PraseClass(smaliFile);
		if(cls == null){
			return;
		}
		SmaliClass.ClassTable.add(cls);
		ChangeSmali(cls);
		AddClinit(cls);
		cls.saveChange();
		NativeHelper helper = NativeHelper.getInstance();
		helper.setOnLoadCode(helper.createOnLoadCode());
		helper.writeSource();
	}

	public static void SafeProject(File projectDir,String filter){
		File maniFile = new File(projectDir.toString() + "\\AndroidManifest.xml");
		if(!maniFile.exists()){
			System.out.println("[*SafeProjectError]AndroidManifest.xml is not found");
			return;
		}
		String mainClassName = Utils.FindMainClass(maniFile);
		if(mainClassName == null){
			System.out.println("[*SafeProjectError]Launcher Class is not found");
			return;
		}
		ArrayList<File> files = Utils.GetInDirFiles(new File(projectDir.toString() +"\\smali\\"));
		if(files == null){
			System.out.println("[*SafeProjectError]Files is null");
			return;
		}
		for(File file : files){
			SmaliClass cls = SmaliUtils.PraseClass(file);
			if(cls == null || cls.isAbstract() || cls.isInterface() || cls.toString().indexOf("$") != -1){
				continue;
			}
			if(cls.toString().startsWith("Landroid")){
				continue;
			}
			String className = cls.toString();
			className = className.startsWith("L") ? className.substring(1,className.length()-1) : className;
			className = className.endsWith(";") ? className.substring(0,className.length()-1) : className;
			className = className.replace("/",".");
			if(filter != null){
				if(className.indexOf(filter) == -1){
					if(mainClassName.equals(className)){
						SmaliClass.ClassTable.add(cls);
						AddClinit(cls);
						cls.saveChange();
					}
					continue;
				}
			}
			SmaliClass.ClassTable.add(cls);
			System.out.println("[I:ChangeSmali]: " + cls.toString());
			ChangeSmali(cls);
			if(mainClassName.equals(className)){
				AddClinit(cls);
			}
			cls.saveChange();
		}
		NativeHelper helper = NativeHelper.getInstance();
		helper.setOnLoadCode(helper.createOnLoadCode());
		helper.writeSource();
	}
	
	public static void ChangeSmali(SmaliClass cls){
		String methodArrayName = Utils.GetRandomMethodName(0);  //改随机名
		NativeHelper helper = NativeHelper.getInstance();
		NativeArray<JNINativeMethod> array = new NativeArray<JNINativeMethod>(cls.toString(),methodArrayName);
		ArrayList<SmaliMethod> smaliMethods = cls.getMethods();
		ArrayList<SmaliMethod> addMethod = new ArrayList<SmaliMethod>();
		for(int i = 0 ;i < smaliMethods.size() ; i++){
			SmaliMethod method = smaliMethods.get(i);
			String srcName = method.getMethodName();
			if(method.isNative() || method.isSynthetic()){
				continue;
			}
			//跳过构造器和静态代码块
			if(!"<init>".equals(srcName) && !"<clinit>".equals(srcName) ){
				String reName = Utils.GetRandomMethodName(1);  //改随机名
				method.rename(reName);
				NativeMethod nativeMethod = NativeMethod.smaliMethod2NativeMethod(method,Utils.GetRandomMethodName(2));  //nativeName改随机名
				helper.addMethod(nativeMethod);
				array.add(new JNINativeMethod(srcName,method.getMethodSig().toString(),NativeHelper.SmaliType2NativeType(method.getReturnTypeName()),nativeMethod.getMethodName()));
				ArrayList<ModifierAttribute> attributes = method.getAttributes();
				attributes.add(ModifierAttribute.ATTRIBUTE_NATIVE);
				addMethod.add(new SmaliMethod(method.getPremission(),attributes,method.getArgs(),method.getReturnTypeName(),method.getSuperClassName(),srcName,-1));
			}
		}
		for(SmaliMethod method : addMethod){
			cls.addMethod(method, "");
		}
		helper.addJNIMethod(array);
	}

	public static void AddClinit(SmaliClass cls){
		ArrayList<ModifierAttribute> attr = new ArrayList<ModifierAttribute>();
		attr.add(ModifierAttribute.ATTRIBUTE_STATIC);
		attr.add(ModifierAttribute.ATTRIBUTE_CONSTRUCTOR);
		SmaliMethod clinit = new SmaliMethod(ModifierPremission.PREMISSION_DEFAULT,attr,new ArrayList<String>(),"V",cls.toString(),"<clinit>",-1);
		StringBuilder codes = new StringBuilder();
		if(cls.findMethod(clinit) ==  null){
			codes.append("    .locals 1\r\n");
			codes.append("    const-string v0,\"smalisafe\"\r\n");
			codes.append("    invoke-static {v0}, Ljava/lang/System;->loadLibrary(Ljava/lang/String;)V\r\n");
			codes.append("    return-void\r\n");
			cls.addMethod(clinit, codes.toString());
		}
		else{
			clinit = cls.findMethod(clinit);
			clinit.addLineCodeToEnd("   const-string v0,\"smalisafe\"");
			clinit.addLineCodeToEnd("    invoke-static {v0}, Ljava/lang/System;->loadLibrary(Ljava/lang/String;)V");
		}
	}
}
