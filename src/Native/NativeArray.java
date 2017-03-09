package Native;

import java.util.ArrayList;

public class NativeArray<T> extends ArrayList<T>{
	private String ArrName;
	private String ClassName;
	public NativeArray(String clsName,String ArrName){
		this.ClassName = clsName;
		this.ArrName = ArrName;
	}
	public String getArrName() {
		return ArrName;
	}
	public void setArrName(String arrName) {
		ArrName = arrName;
	}
	public String getClassName() {
		return ClassName;
	}
	public void setClassName(String className) {
		ClassName = className;
	}
	
}
