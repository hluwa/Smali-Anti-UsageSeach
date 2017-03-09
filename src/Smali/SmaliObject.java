package Smali;
import java.util.ArrayList;

import Smali.SmaliModifier.ModifierAttribute;


public class SmaliObject {

	private final SmaliModifier.ModifierPremission premission;
	private final ArrayList<SmaliModifier.ModifierAttribute> attributes = new ArrayList<SmaliModifier.ModifierAttribute>();
	private int lineInFile;
	
	
	public SmaliObject(SmaliModifier premission,ArrayList<SmaliModifier> attributes,int lineInFile){
		this.lineInFile = lineInFile;
		if(premission instanceof SmaliModifier.ModifierPremission){
			this.premission = (SmaliModifier.ModifierPremission) premission;
		}
		else{
			this.premission = SmaliModifier.ModifierPremission.PREMISSION_DEFAULT;
		}
		if(attributes == null){
			return;
		}
		for(SmaliModifier attribute : attributes){
			if(attribute instanceof SmaliModifier.ModifierAttribute){
				this.attributes.add((SmaliModifier.ModifierAttribute) attribute);
			}
		}
	}
	public SmaliModifier.ModifierPremission getPremission(){
		return premission;
	}

	public int getLineInFile(){
		return lineInFile;
	}
	
	public void setLineInFile(int line){
		this.lineInFile = line;
	}
	
	public ArrayList<SmaliModifier.ModifierAttribute> getAttributes(){
		return attributes;
	}
	

	public boolean isStatic(){
		for(ModifierAttribute attr : getAttributes()){
			if(ModifierAttribute.ATTRIBUTE_STATIC.equals(attr)){
				return true;
			}
		}
		return false;
	}
	
	public boolean isFinal(){
		for(ModifierAttribute attr : getAttributes()){
			if(ModifierAttribute.ATTRIBUTE_FINAL.equals(attr)){
				return true;
			}
		}
		return false;
	}
}
