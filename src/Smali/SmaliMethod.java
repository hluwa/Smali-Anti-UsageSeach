package Smali;
import java.util.ArrayList;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import Smali.SmaliModifier.ModifierAttribute;
import Smali.SmaliModifier.ModifierPremission;
import Smali.SmaliModifier.ModifierType;

public class SmaliMethod extends SmaliObject{
	private String methodName;
	private ArrayList<String> args;
	private String superClass;
	private String returnType;
	
	
	//原谅我是真的不会写正则~ - -。
	public static final String MethodRegEx = ModifierType.TYPE_METHOD.getModifierText() +" ([a-z ]{0,64}) ([a-zA-Z0-9_$<>]{0,64})\\(([a-zA-Z0-9_$;/]{0,512})\\)([a-zA-Z0-9_$;/]{0,64})";
	public static final String MethodRegEx_NotPre = ModifierType.TYPE_METHOD.getModifierText() +" ([a-zA-Z0-9_$<>]{0,64})\\(([a-zA-Z0-9_$;/]{0,512})\\)([a-zA-Z0-9_$;/]{0,64})";
	
	/**
	 * @param premission: ModifierPremission
	 * **/
	public SmaliMethod(ModifierPremission premission,ArrayList<ModifierAttribute> attributes,ArrayList<String> args,String returnType,String superCls,String name,int lineInFile){
		super(premission,attributes,lineInFile);
		this.args = args;
		this.returnType = returnType;
		this.methodName = name;
		this.superClass = superCls;
	}
	
	public SmaliMethod(String name,ArrayList<String> args,String returnType){
		this(null,null,args,returnType,null,name,-1);
	}
	
	/**
	 * @return ClassName+"->"+MethodName
	 * **/
	public String toString(){
		return superClass+"->"+methodName;
	}
	
	public boolean equals(SmaliMethod method){
		if(method == null){
			return false;
		}
		if(this.methodName != method.methodName){
			return false;
		}
		if(!this.getMethodSig().equals(method.getMethodSig())){
			return false;
		}
		return true;
	}
	
	public String getMethodName(){
		return methodName;
	}
	
	public void setMethodName(String name){
		this.methodName = name;
	}
	
	public boolean isSynthetic(){
		if(getAttributes().indexOf(ModifierAttribute.ATTRIBUTE_SYNTHETIC) != -1){
			return true;
		}
		return false;
	}
	
	public boolean isNative(){
		if(getAttributes().indexOf(ModifierAttribute.ATTRIBUTE_NATIVE) != -1){
			return true;
		}
		return false;
	}
		
	public ArrayList<String> getArgs(){
		return args;
	}
	
	public String getArgsSig(){
		StringBuilder sig = new StringBuilder();
		for(String arg : args){
			sig.append(arg);
		}
		return sig.toString();
	}
	
	public String getMethodSig(){
		StringBuilder sig =  new StringBuilder("(");
		for(String arg : args){
			sig.append(arg);
		}
		sig.append(")");
		sig.append(returnType);
		return sig.toString();
	}
	
	public SmaliClass getReturnType(){
		return SmaliClass.FindClass(returnType);
	}

	public SmaliClass getSuperClass(){
		return SmaliClass.FindClass(superClass);
	}
	
	public String getReturnTypeName(){
		return returnType;
	}
	
	public String getSuperClassName(){
		return superClass;
	}
	
	public void setSuperClass(String superClass){
		this.superClass = superClass;
	}
	
	/**
	 * @return 成功返回0,获取代码行失败返回-1,匹配失败返回-2
	 * **/
	public int rename(String text){
		String line = getSuperClass().getCodes().get(getLineInFile()).toString();
		if(line == null){
			return -1;
		}
		boolean havePre = true;
		Pattern pattern = Pattern.compile(MethodRegEx);
		Matcher matcher = pattern.matcher(line);
		if(!matcher.find()){
			pattern = Pattern.compile(MethodRegEx_NotPre);
			matcher = pattern.matcher(line);
			if(!matcher.find()){
				return -2;	
			}
			havePre = false;
		}
		if(havePre){
			getSuperClass().getCodes().set(getLineInFile(),SmaliModifier.ModifierType.TYPE_METHOD.getModifierText()+" " + matcher.group(1) + " " + text + "(" + matcher.group(3) + ")" +matcher.group(4)) ;
		}
		else{
			getSuperClass().getCodes().set(getLineInFile(),SmaliModifier.ModifierType.TYPE_METHOD.getModifierText()+" " + text + "(" + matcher.group(2) + ")" +matcher.group(3));
		}
		setMethodName(text);
		return 0;
	}
}
