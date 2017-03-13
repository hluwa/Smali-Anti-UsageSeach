package Native;

import java.util.ArrayList;

import Smali.SmaliMethod;
import Smali.SmaliClass.SmaliType;

public class NativeMethod {
	private String returnType;
	private String methodName;
	private String args;
	private StringBuilder code;
	public NativeMethod(String r,String m,String a,StringBuilder c){
		this.returnType = r;
		this.methodName = m;
		this.args = a;
		this.code = c;
	}
	public String getReturnType() {
		return returnType;
	}
	public void setReturnType(String returnType) {
		this.returnType = returnType;
	}
	public String getMethodName() {
		return methodName;
	}
	public void setMethodName(String methodName) {
		this.methodName = methodName;
	}
	public String getArgs() {
		return args;
	}
	public void setArgs(String args) {
		this.args = args;
	}
	public StringBuilder getCode() {
		return code;
	}
	public void setCode(StringBuilder code) {
		this.code = code;
	}
	public static NativeMethod smaliMethod2NativeMethod(SmaliMethod srcSmaliMethod,String navtiveMethodName){
		String clsName = srcSmaliMethod.getSuperClassName();
		if(clsName.startsWith("L")){
			clsName = clsName.substring(1, clsName.length()-1);
		}
		if(clsName.endsWith(";")){
			clsName = clsName.substring(0,clsName.length()-1);
		}
		StringBuilder args = new StringBuilder("JNIEnv *env, jobject obj");
		StringBuilder codes = new StringBuilder("    jclass cls = env->FindClass(\"" + clsName + "\");\r\n");
		String isStatic = "";
		String classId = "obj";
		StringBuilder callBackArgs = new StringBuilder();
		ArrayList<String> smaliArgs = srcSmaliMethod.getArgs();
		for(int i = 0;i < smaliArgs.size() ;i++){
			if(i == 0){
				args.append(",");
				callBackArgs.append(",");
			}
			args.append(NativeHelper.SmaliType2NativeType(smaliArgs.get(i)));
			args.append(" arg" + String.valueOf(i));
			callBackArgs.append("arg"+String.valueOf(i));
			if(i != smaliArgs.size()-1){
				args.append(",");
				callBackArgs.append(",");
			}
		}
		if(srcSmaliMethod.isStatic()){
			isStatic = "Static";
			classId = "cls";
		}
		codes.append("    jmethodID callback = env->Get" + isStatic + "MethodID(cls,\"" + srcSmaliMethod.getMethodName() + "\",\"(" + srcSmaliMethod.getArgsSig()+")" + srcSmaliMethod.getReturnTypeName() + "\");\r\n");
		codes.append("    ");
		if(!srcSmaliMethod.getReturnTypeName().equals(SmaliType.V.toString())){
			String type = "Object";
			if(srcSmaliMethod.getReturnTypeName().equals(SmaliType.Z.toString())){
				type = "Boolean";
			}
			else if(srcSmaliMethod.getReturnTypeName().equals(SmaliType.I.toString())){
				type = "Int";
			}
			else if(srcSmaliMethod.getReturnTypeName().equals(SmaliType.B.toString())){
				type = "Byte";
			}
			else if(srcSmaliMethod.getReturnTypeName().equals(SmaliType.C.toString())){
				type = "Char";
			}
			else if(srcSmaliMethod.getReturnTypeName().equals(SmaliType.D.toString())){
				type = "Double";
			}
			else if(srcSmaliMethod.getReturnTypeName().equals(SmaliType.F.toString())){
				type = "Float";
			}
			else if(srcSmaliMethod.getReturnTypeName().equals(SmaliType.J.toString())){
				type = "Long";
			}
			else if(srcSmaliMethod.getReturnTypeName().equals(SmaliType.S.toString())){
				type = "Short";
			}
			codes.append("return ");
			codes.append("(" + NativeHelper.SmaliType2NativeType(srcSmaliMethod.getReturnTypeName()) + ")env->Call" + isStatic + type + "Method("+ classId +",callback" + callBackArgs + ");");
		}
		
		else{
			codes.append("env->Call" + isStatic + "VoidMethod(" + classId + ",callback" + callBackArgs+");");
		}
		NativeMethod nativeMethod = new NativeMethod(NativeHelper.SmaliType2NativeType(srcSmaliMethod.getReturnTypeName()),navtiveMethodName,args.toString(),codes);
		return nativeMethod;
	}
}
