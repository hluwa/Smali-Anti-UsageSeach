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
		//Ð´NatvieMethod
		for(NativeMethod method : Methods){
			source.append(method.getReturnType()+" "+method.getMethodName()+"("+method.getArgs()+"){\r\n"+method.getCode()+"\r\n}\r\n\r\n");
		}
		//Ð´JNIÓ³ÉäÊý×é
		for(NativeArray<JNINativeMethod> jnis : JNIMethods){
			source.append("static const JNINativeMethod "+jnis.getArrName()+"[] = {\r\n");
			for(JNINativeMethod jni : jnis){
				source.append("    {\""+jni.getJavaMethodName()+"\", \""+jni.getMethodSig()+"\", ("+jni.getReturnType()+"*)"+jni.getNativeMethodName()+"},\r\n");
			}
			source.append("};\r\n\r\n");
		}
		source.append("JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void* reserved){\r\n" + OnLoadCode + "\r\n}");
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
		if(arrNum > 1){
			return "jobject";
		}
		smaliType = smaliType.substring(arrNum);
		if(SmaliType.B.toString().equals(smaliType)){
			if(arrNum == 1){
				return "jbyteArray";
			}
			return "jbyte";
		}
		else if(SmaliType.C.toString().equals(smaliType)){
			if(arrNum == 1){
				return "jcharArray";
			}
			return "jchar";
		}
		else if(SmaliType.D.toString().equals(smaliType)){
			if(arrNum == 1){
				return "jdoubeArray";
			}
			return "jdoube";
		}
		else if(SmaliType.F.toString().equals(smaliType)){
			if(arrNum == 1){
				return "jfloatArray";
			}
			return "jfloat";
		}
		else if(SmaliType.I.toString().equals(smaliType)){
			if(arrNum == 1){
				return "jintArray";
			}
			return "jint";
		}
		else if(SmaliType.J.toString().equals(smaliType)){
			if(arrNum == 1){
				return "jlongArray";
			}
			return "jlong";
		}
		else if(SmaliType.S.toString().equals(smaliType)){
			if(arrNum == 1){
				return "jshortArray";
			}
			return "jshort";
		}
		else if(SmaliType.V.toString().equals(smaliType)){
			return "void";
		}
		else if(SmaliType.Z.toString().equals(smaliType)){
			return "jboolean";
		}
		if(arrNum == 1){
			return "jobjectArray";
		}
		return "jobject";
	}

	public StringBuilder createOnLoadCode(){
		StringBuilder codes = new StringBuilder();
		codes.append("    JNIEnv* env; \r\n");
		codes.append("    jclass cls; \r\n");
		codes.append("    vm->GetEnv((void**)&env, JNI_VERSION_1_4); \r\n");
		for(NativeArray<JNINativeMethod> array : JNIMethods){
			String clsName = array.getClassName();
			if(clsName.startsWith("L")){
				clsName = clsName.substring(1, clsName.length()-1);
			}
			if(clsName.endsWith(";")){
				clsName = clsName.substring(0,clsName.length()-1);
			}
			codes.append("    cls = env->FindClass(\""+clsName+"\"); \r\n");
			codes.append("    env->RegisterNatives(cls,"+array.getArrName()+",sizeof("+array.getArrName()+")/sizeof("+array.getArrName()+"[0])); \r\n");
		}
		codes.append("    return JNI_VERSION_1_4; \r\n");
		return codes;
	}

}
