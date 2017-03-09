package Smali;
import java.util.ArrayList;

public class SmaliField extends SmaliObject{
	private final String type;
	private final String fieldName;
	
	public SmaliField(SmaliModifier premission,ArrayList<SmaliModifier> attributes,String type,String name,int lineInFile){
		super(premission,attributes,lineInFile);
		this.type = type;
		this.fieldName = name;
	}
	
	public String toString(){
		return fieldName;
	}
	
	public String getName(){
		return fieldName;
	}
	
	public SmaliClass getType(){
		return SmaliClass.FindClass(type);
	}
	
	
	
}
