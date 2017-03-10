package Smali;
import java.util.ArrayList;

import Smali.SmaliModifier.ModifierAttribute;
import Smali.SmaliModifier.ModifierPremission;

public class SmaliField extends SmaliObject{
	private final String type;
	private final String fieldName;
	
	public SmaliField(ModifierPremission premission,ArrayList<ModifierAttribute> attributes,String type,String name,int lineInFile){
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
