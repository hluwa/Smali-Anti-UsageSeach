package Native;

public class JNINativeMethod {
	private String javaMethodName;
	private String methodSig;
	private String nativeMethodName;
	private String returnType;
	public JNINativeMethod(String javaMethod,String sig,String r,String nativeMethod){
		this.javaMethodName = javaMethod;
		this.methodSig = sig;
		this.returnType = r;
		this.nativeMethodName = nativeMethod;
	}
	public String getJavaMethodName() {
		return javaMethodName;
	}
	public void setJavaMethodName(String javaMethodName) {
		this.javaMethodName = javaMethodName;
	}
	public String getMethodSig() {
		return methodSig;
	}
	public void setMethodSig(String methodSig) {
		this.methodSig = methodSig;
	}
	public String getNativeMethodName() {
		return nativeMethodName;
	}
	public void setNativeMethodName(String nativeMethodName) {
		this.nativeMethodName = nativeMethodName;
	}
	public String getReturnType() {
		return returnType;
	}
	public void setReturnType(String returnType) {
		this.returnType = returnType;
	}
}
