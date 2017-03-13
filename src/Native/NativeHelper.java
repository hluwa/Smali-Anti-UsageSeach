package Native;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;

import Smali.SmaliClass.SmaliType;

public class NativeHelper {
	public static final String LibName = "SmaliSafe";
	public static final String SourceFileName = LibName + ".cpp";

	public static NativeHelper helper;
	
	private File SourceFile;
	
	private StringBuilder OnLoadCode = new StringBuilder(); 
	
	private ArrayList<NativeArray<JNINativeMethod>> JNIMethods = new ArrayList<NativeArray<JNINativeMethod>>(); 
	
	private ArrayList<NativeMethod> Methods = new ArrayList<NativeMethod>();
	
	public static NativeHelper getInstance(){
		if(helper == null){
			helper =  new NativeHelper();
		}
		return helper;
	}
	
	public StringBuilder getOnLoadCode() {
		return OnLoadCode;
	}

	public void setOnLoadCode(StringBuilder onLoadCode) {
		OnLoadCode = onLoadCode;
	}

	public void addJNIMethod(NativeArray<JNINativeMethod> arr){
		JNIMethods.add(arr);
	}
	
	public void addMethod(NativeMethod method){
		Methods.add(method);
	}
	
	public void writeSource(){
		if(SourceFile == null){
			SourceFile = new File("jni");
			SourceFile.mkdir();
			SourceFile = new File("jni\\" + SourceFileName);
		}
		BufferedWriter writer;
		StringBuilder source = new StringBuilder();
		source.append("#include <jni.h>\r\n\r\n");
		
		//结构体
		
		source.append("struct Regnative{ \r\n");
		source.append("    char* className; \r\n");
		source.append("    int size; \r\n");
		source.append("    JNINativeMethod* method;");
		source.append("};\r\n\r\n");
		
		//写NatvieMethod
		for(NativeMethod method : Methods){
			source.append(method.getReturnType()+" "+method.getMethodName()+"("+method.getArgs()+"){\r\n"+method.getCode()+"\r\n}\r\n\r\n");
		}
		//写JNI映射数组
		for(NativeArray<JNINativeMethod> jnis : JNIMethods){
			if(jnis.size() == 0){
				continue;
			}
			source.append("static JNINativeMethod "+jnis.getArrName()+"[] = {\r\n");
			for(JNINativeMethod jni : jnis){
				source.append("    {\""+jni.getJavaMethodName()+"\", \""+jni.getMethodSig()+"\", ("+jni.getReturnType()+"*)"+jni.getNativeMethodName()+"},\r\n");
			}
			source.append("};\r\n\r\n");
		}
		
		//写关联数组
		source.append("static const  Regnative reg[] = { \r\n");
		for(NativeArray<JNINativeMethod> array : JNIMethods){
			if(array.size() == 0){
				continue;
			}
			String clsName = array.getClassName();
			if(clsName.startsWith("L")){
				clsName = clsName.substring(1, clsName.length()-1);
			}
			if(clsName.endsWith(";")){
				clsName = clsName.substring(0,clsName.length()-1);
			}

			source.append("         {\"" + clsName + "\"," + array.size() + "," + array.getArrName() + "}, \r\n");
		}
		
		source.append("};\r\n\r\nJNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void* reserved){\r\n" + OnLoadCode + "\r\n}");
		try {
			 writer = new BufferedWriter(new FileWriter(SourceFile));
			 writer.write(source.toString());
			 writer.flush();
			 writer.close();
		} catch (IOException e) {
			System.out.println("[*WriterSourceError]IOException: "+e.toString());
			return;
		}
		
	}

	public static String SmaliType2NativeType(String smaliType){
		int arrNum = 0;
		int index = 0;
		while( index < smaliType.length() &&  smaliType.charAt(index) == '['){
			arrNum ++;
			index++;
		}
		if(arrNum > 0){
			return "jobject";
		}
		if(SmaliType.B.toString().equals(smaliType)){
			return "jbyte";
		}
		else if(SmaliType.C.toString().equals(smaliType)){
			return "jchar";
		}
		else if(SmaliType.D.toString().equals(smaliType)){
			return "jdouble";
		}
		else if(SmaliType.F.toString().equals(smaliType)){
			return "jfloat";
		}
		else if(SmaliType.I.toString().equals(smaliType)){
			return "jint";
		}
		else if(SmaliType.J.toString().equals(smaliType)){
			return "jlong";
		}
		else if(SmaliType.S.toString().equals(smaliType)){
			return "jshort";
		}
		else if(SmaliType.V.toString().equals(smaliType)){
			return "void";
		}
		else if(SmaliType.Z.toString().equals(smaliType)){
			return "jboolean";
		}
		return "jobject";
	}

	public StringBuilder createOnLoadCode(){
		StringBuilder codes = new StringBuilder();
		codes.append("    JNIEnv* env; \r\n");
		codes.append("    jclass cls; \r\n");
		codes.append("    vm->GetEnv((void**)&env, JNI_VERSION_1_4); \r\n");
		codes.append("    for(int i = 0; i < sizeof(reg)/sizeof(Regnative);i++ ) {\r\n");
		codes.append("        cls = env->FindClass(reg[i].className);\r\n");
		codes.append("        env->RegisterNatives(cls, reg[i].method,reg[i].size);\r\n");
		codes.append("    }\r\nreturn JNI_VERSION_1_4;\r\n");
		return codes;
	}

}
