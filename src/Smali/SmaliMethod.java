package Smali;
import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
import java.io.OutputStream;
import java.util.ArrayList;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class SmaliMethod extends SmaliObject{
	private String methodName;
	private ArrayList<String> args;
	private String superClass;
	private String returnType;
	
	
	//原谅我是真的不会写正则~ - -。
	public static final String MethodRegEx = SmaliModifier.ModifierType.TYPE_METHOD.getModifierText() +" ([a-z ]{0,64}) ([a-zA-Z0-9_$<>]{0,64})\\(([a-zA-Z0-9_$;/]{0,512})\\)([a-zA-Z0-9_$;/]{0,64})";
	public static final String MethodRegEx_NotPre = SmaliModifier.ModifierType.TYPE_METHOD.getModifierText() +" ([a-zA-Z0-9_$<>]{0,64})\\(([a-zA-Z0-9_$;/]{0,512})\\)([a-zA-Z0-9_$;/]{0,64})";
	
	public SmaliMethod(SmaliModifier premission,ArrayList<SmaliModifier> attributes,ArrayList<String> args,String returnType,String superCls,String name,int lineInFile){
		super(premission,attributes,lineInFile);
		this.args = args;
		this.returnType = returnType;
		this.methodName = name;
		this.superClass = superCls;
	}
	
	public String toString(){
		return superClass+"->"+methodName;
	}
	
	public String getName(){
		return methodName;
	}
	
	public void setName(String name){
		this.methodName = name;
	}
	
	public boolean isSynthetic(){
		if(getAttributes().indexOf(SmaliModifier.ModifierAttribute.ATTRIBUTE_SYNTHETIC) != -1){
			return true;
		}
		return false;
	}
	
	public boolean isNative(){
		if(getAttributes().indexOf(SmaliModifier.ModifierAttribute.ATTRIBUTE_NATIVE) != -1){
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
	
	public SmaliClass getReturnType(){
		return SmaliClass.FindClass(returnType);
	}
	
	public String getReturnTypeStr(){
		return returnType;
	}
	
	public String getSuperClassStr(){
		return superClass;
	}
	
	public SmaliClass getSuperClass(){
		return SmaliClass.FindClass(superClass);
	}
	
	public void setSuperClass(String superClass){
		this.superClass = superClass;
	}
	
	public boolean equals(SmaliMethod method){
		if(method == null){
			return false;
		}
		if(this.methodName != method.methodName || !method.returnType.equals(this.returnType)){
			return false;
		}
		if(method.args == null || this.args == null || method.args.size() != this.args.size()){
			return false;
		}
		for(int i = 0;i<this.args.size();i++){
			if(!this.args.get(i).equals(method.args.get(i))){
				return false;
			}
		}
		return true;
	}
	
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
			setName(text);
			return 0;
		
	}
}
