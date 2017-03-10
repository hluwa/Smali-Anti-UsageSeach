package Smali;
import java.util.ArrayList;

import Smali.SmaliModifier.ModifierAttribute;
import Smali.SmaliModifier.ModifierPremission;


public class SmaliObject {

	private final SmaliModifier.ModifierPremission premission;
	private final ArrayList<ModifierAttribute> attributes = new ArrayList<ModifierAttribute>();
	private int lineInFile;
	private int overAddLine = 0;
	public int lineOffset = 0;
	
	
	public SmaliObject(ModifierPremission premission,ArrayList<ModifierAttribute> attributes,int lineInFile){
		this.lineInFile = lineInFile;
		if(premission != null){
			this.premission = premission;
		}
		else{
			this.premission = ModifierPremission.PREMISSION_DEFAULT;
		}
		if(attributes == null){
			return;
		}
		for(ModifierAttribute attribute : attributes){
			this.attributes.add(attribute);
		}
	}

	public ModifierPremission getPremission(){
		return premission;
	}
	
	public int getOverAddLine() {
		return overAddLine;
	}

	public void setOverAddLine(int overAddLine) {
		this.overAddLine = overAddLine;
	}

	public int getLineInFile(){
		if(lineInFile > overAddLine){
			return lineInFile + lineOffset;	
		}
		return lineInFile;
	}
	
	public void setLineInFile(int line){
		this.lineInFile = line;
	}
	
	public ArrayList<ModifierAttribute> getAttributes(){
		return attributes;
	}
	
	public boolean isStatic(){
		if(getAttributes().indexOf(ModifierAttribute.ATTRIBUTE_STATIC) != -1){
			return true;
		}
		return false;
	}
	
	public boolean isFinal(){
		if(getAttributes().indexOf(ModifierAttribute.ATTRIBUTE_FINAL) != -1){
			return true;
		}
		return false;
	}
}
