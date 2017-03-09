package Smali;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import Smali.SmaliModifier.ModifierPremission;

public class SmaliClass extends SmaliObject{
	private final String ClassName;
	private final ArrayList<SmaliField> fields;
	private final ArrayList<SmaliMethod> methods;
	private File classFile;
	private BufferedReader reader;
	private BufferedWriter writer;
	private ArrayList<String> codeLines;
	
	public static final ArrayList<SmaliClass> ClassTable = new ArrayList<SmaliClass>();
	
	public static class SmaliType extends SmaliClass{
		private boolean isArr;
		private int arrNum;
		public SmaliType(SmaliModifier premission,ArrayList<SmaliModifier> attributes,ArrayList<SmaliField> fields,ArrayList<SmaliMethod> methods,String name,boolean isArr,int arrNum){
			super(premission,attributes,fields,methods,name,null);
			this.isArr = isArr;
			this.arrNum = arrNum;
		}
		public boolean isArr() {
			return isArr;
		}

		public void setArr(boolean isArr) {
			this.isArr = isArr;
		}
		
		
		public int getArrNum() {
			return arrNum;
		}
		public void setArrNum(int arrNum) {
			this.arrNum = arrNum;
		}


		public static final SmaliType V = new SmaliType(ModifierPremission.PREMISSION_PUBLIC,null,null,null,"V",false,0);
		public static final SmaliType Z = new SmaliType(ModifierPremission.PREMISSION_PUBLIC,null,null,null,"Z",false,0);
		public static final SmaliType I = new SmaliType(ModifierPremission.PREMISSION_PUBLIC,null,null,null,"I",false,0);
		public static final SmaliType B = new SmaliType(ModifierPremission.PREMISSION_PUBLIC,null,null,null,"B",false,0);
		public static final SmaliType S = new SmaliType(ModifierPremission.PREMISSION_PUBLIC,null,null,null,"S",false,0);
		public static final SmaliType C = new SmaliType(ModifierPremission.PREMISSION_PUBLIC,null,null,null,"C",false,0);
		public static final SmaliType J = new SmaliType(ModifierPremission.PREMISSION_PUBLIC,null,null,null,"J",false,0);
		public static final SmaliType F = new SmaliType(ModifierPremission.PREMISSION_PUBLIC,null,null,null,"F",false,0);
		public static final SmaliType D = new SmaliType(ModifierPremission.PREMISSION_PUBLIC,null,null,null,"D",false,0);
		
		public char getChar(){
			return toString().charAt(0);
		}
		
		public static SmaliType GetBaseType(char c){
			if(c == V.getChar()){
				return V;
			}
			else if(c == Z.getChar()){
				return Z;
			}
			else if(c == I.getChar()){
				return I;
			}
			else if(c == B.getChar()){
				return B;
			}
			else if(c == S.getChar()){
				return S;
			}
			else if(c == C.getChar()){
				return C;
			}
			else if(c == J.getChar()){
				return J;
			}
			else if(c == F.getChar()){
				return F;
			}
			else if(c == D.getChar()){
				return D;
			}
			else{
				return null;
			}
		}
	}

	public boolean equals(SmaliClass cls){
		if(cls == null){
			return false;
		}
		return cls.toString() == this.toString();
	}
	
	public SmaliClass(SmaliModifier premission,ArrayList<SmaliModifier> attributes,ArrayList<SmaliField> fields,ArrayList<SmaliMethod> methods,String name,File classFile){
		super(premission,attributes,0);
		this.ClassName = name;
		this.fields = fields;
		this.methods = methods;
		this.classFile = classFile;
	}
	
	public String toString(){
		return ClassName;
	}
	
	public BufferedWriter getWriter(){
		if(writer == null){
			if(classFile == null){
				return null;
			}
			try {
				writer = new BufferedWriter(new FileWriter(classFile));
			} catch (IOException e) {
				System.out.println("[*E] FileNotFound:" + e.toString());
			}
		}
		return writer;
	}
	
	public ArrayList<String> getCodes(){
		if(codeLines == null){
			if(reader == null ){
				if(classFile == null){
					return null;
				}
				try {
					reader = new BufferedReader(new FileReader(classFile));
				} catch (FileNotFoundException e) {
					System.out.println("[*GetCodesError] FileNotFound: " + e.toString());
					return null;
				}
			}
			ArrayList<String> codes = new ArrayList<String>();
			String tmp;
			try {
				while((tmp = reader.readLine()) != null){
					codes.add(tmp);
				}
				reader.close();
			} catch (IOException e) {
				System.out.println("[*GetCodesError] IOExceotion: " + e.toString());
				return null;
			}
			
			codeLines = codes;
		}
		return codeLines;
	}
	
	public ArrayList<SmaliMethod> getMethods(){
		return methods;
	}
	
	public int saveChange(){
		try {
			if(writer != null){
				writer.close();
				writer = null;
			}
			writer = getWriter();
			for(String tmp : codeLines){
				writer.write(tmp+"\r\n");
			}
			writer.flush();
			cleanMem();
			return 0;
		} catch (IOException e) {
			System.out.println("[*SaveChangeError: ]" +e.toString());
			return -1;
		}
	}
	
	public void cleanMem(){
		if(reader != null){
			try {
				reader.close();
			} catch (IOException e) {
			}
		}
		if(writer != null){
			try {
				writer.close();
			} catch (IOException e) {
			}
			
		}
		codeLines = null;
		reader = null;
		writer = null;
	}
	
	public File getClassFile(){
		return classFile;
	}

	public int addMethod(SmaliMethod method,String smaliCode){
		if(method == null){
			return -1;
		}
		method.setLineInFile(codeLines.size()+2);
		StringBuilder builder = new StringBuilder();
		ArrayList<String> codeLines = getCodes();
		codeLines.add("");
		builder.append(SmaliModifier.ModifierType.TYPE_METHOD+" ");
		builder.append(method.getPremission().toString()+" ");
		if(method.getAttributes() != null && method.getAttributes().size() != 0){
			for(SmaliModifier modifier : method.getAttributes()){
				builder.append(modifier.getModifierText() + " ");
			}
		}
		builder.append(method.getName()+"(");
		if(method.getArgs() != null){
			for(String type : method.getArgs()){
				builder.append(type.toString());
			}
		}
		builder.append(")");
		builder.append(method.getReturnTypeStr());
		codeLines.add(builder.toString());
		String[] smaliLines = smaliCode.split("\r\n");
		for(String line : smaliLines){
			codeLines.add(line);
		}
		codeLines.add(".end method");
		this.codeLines = codeLines;
		method.setSuperClass(this.toString());
		methods.add(method);
		
		return 0;
		
	}
	
	public ArrayList<SmaliMethod> getInvokeMethodList(){
		ArrayList<SmaliMethod> list = new ArrayList<SmaliMethod>();
		for(String line : getCodes()){
			line = line.trim();
			String[] sp = line.split(" ");
			if(sp[0].indexOf("invoke") != -1){
				
				//正则匹配 (类名)->(方法名)((参数列表))(返回类型),看到这表达式的请文明吐槽.......
				Pattern pattern = Pattern.compile("([a-zA-Z0-9/_$]{0,128});->([0-9a-zA-Z_$]{0,128})\\(([a-zA-Z0-9/_$;]{0,512})\\)([a-zA-Z0-9/_$;]{0,128})");
				Matcher matcher = pattern.matcher(line);
				if(matcher.find()){
					String superClass = matcher.group(1);
					String returnType;
					SmaliMethod method;
					ArrayList<String> args = SmaliUtils.PraseMethodArgs(matcher.group(3));
					//if(matcher.group(4).startsWith("L")){
						returnType = matcher.group(4);
					//}
					//else{
						//returnType = SmaliType.GetBaseType(matcher.group(4).charAt(0));
					//}
					//if(returnType == null){
						//System.out.println("[*MethodReturnTypeNotFound]: " + matcher.group(4));
						//returnType = new SmaliClass(null,null,null,null,matcher.group(4),null);
					//}
					//if(superClass == null){
						//System.out.println("[*MethodSuperClassNotFound]： " + matcher.group(1));
						//superClass = new SmaliClass(null,null,null,null,matcher.group(1),null);
						//method = new SmaliMethod(SmaliModifier.ModifierPremission.PREMISSION_DEFAULT,null,args,returnType,superClass,matcher.group(2),-1);
					//}
					//else{
						//method = superClass.findMethod(new SmaliMethod(null,null,args,returnType,null,matcher.group(2),-1));
						//if(method == null){
							method = new SmaliMethod(SmaliModifier.ModifierPremission.PREMISSION_DEFAULT,null,args,returnType,superClass,matcher.group(2),-1);
						//}
					//}
							list.add(method);
				}
			}
		}
		return list;
	}
	
	
	public static SmaliClass FindClass(String cls){
		if(cls == null){
			return null;
		}
		for(SmaliClass sc : ClassTable){
			if(sc.toString().equals(cls)){
				return sc;
			}
		}
		return null;
	}

	public SmaliMethod findMethod(SmaliMethod method){
		for(SmaliMethod m : methods){
			if(m.equals(method)){
				return m;
			}
		}
		return null;
	}
}
