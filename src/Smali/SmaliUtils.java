package Smali;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;

import Smali.SmaliModifier.ModifierAttribute;
import Smali.SmaliModifier.ModifierPremission;
import Smali.SmaliModifier.ModifierType;

public class SmaliUtils {
	public static ArrayList<String> PraseMethodArgs(String text){
		ArrayList<String> args = new ArrayList<String>();
		char[] c = text.toCharArray();
		int index = text.indexOf("L");
		
		if(index != -1){
			for(int i = 0; i <index; i++){
				int i1 = i;
				if(c[i] != '['){
					String arg = String.valueOf(c[i]);
					while(i1 > 0 && c[i1-1] == '['){
						arg = "[" + arg;
						i1--;
					}
					args.add(arg);	
				}						
			}
			int endIndex = -1;
			while(index != -1){
				endIndex = text.indexOf(";",index);
				String clsName = text.substring(index, endIndex+1);
				args.add(clsName);
				index = text.indexOf("L",endIndex);
				if(index - endIndex > 1){
					for(int i = endIndex + 1 ;i < index; i++){
						int i1 = i;
						if(c[i] != '['){
							String arg = String.valueOf(c[i]);
							while(i1 >0 && c[i1-1]== '['){
								arg = "[" + arg;
								i1--;
							}
							args.add(arg);	
						}						
					}
				}
			}
			if(endIndex != -1 && endIndex < c.length-1){
				for(int i = endIndex+1; i < c.length; i++){
					int i1 = i;
					if(c[i] != '['){
						String arg = String.valueOf(c[i]);
						while(i1 >0 && c[i1-1]== '['){
							arg = "[" + arg;
							i1--;
						}
						args.add(arg);	
					}						
				}
			}
		}
		else{
			for(int i = 0; i < c.length; i++){
				int i1 = i;
				if(c[i] != '['){
					String arg = String.valueOf(c[i]);
					while(i1 >0 && c[i1-1]== '['){
						arg = "[" + arg;
						i1--;
					}
					args.add(arg);	
				}						
			}
		}
		
		return args;
	}

	public static SmaliClass PraseClass(File file){
		BufferedReader reader;
		try {
			reader = new BufferedReader(new FileReader(file));
		} catch (FileNotFoundException e) {
			System.out.println("[*PraseClassError]FileNotFoundException: " + e.toString());
			return null;
		}
		String line;
		String className = "";
		int lineInFile = 0;
		ModifierPremission premission = ModifierPremission.PREMISSION_DEFAULT;
		ArrayList<ModifierAttribute> attributes = new ArrayList<ModifierAttribute>();
		ArrayList<SmaliField> fields = new ArrayList<SmaliField>();
		ArrayList<SmaliMethod> methods = new ArrayList<SmaliMethod>();
		try {
			while((line = reader.readLine()) != null){
				line = line.trim();
				if(line.startsWith(ModifierType.TYPE_CLASS.getModifierText())){
					String[] sp = line.split(" ");  //sp[] = {".class",Premission,{Attributes},ClassName}
					premission = ModifierPremission.Get(sp[1]);
					for(int i = 2;i < sp.length - 1;i++){ 
						attributes.add(ModifierAttribute.Get(sp[i]));
					}
					className = sp[sp.length-1];
				}
				/*暂时用不到field,待补全
				if(line.startsWith(SmaliModifier.ModifierType.TYPE_FIELD.getModifierText())){
					String[] sp = line.split(" ");
					SmaliModifier.ModifierPremission fieldPremission = SmaliModifier.ModifierPremission.Get(sp[0]);
					ArrayList<SmaliModifier.ModifierAttribute> fieldAttributes = new ArrayList<SmaliModifier.ModifierAttribute>();
					for(int i = 2;i < sp.length - 1 ;i++){
						fieldAttributes.add(SmaliModifier.ModifierAttribute.Get(sp[i]));
					}
					String sp1[] = sp[sp.length-1].split(":");
					SmaliField field = new SmaliField();
				}*/
				
				if(line.startsWith(ModifierType.TYPE_METHOD.getModifierText())){
					String[] sp = line.split(" ");	//sp[] = {".method",Premission,{Attributes},MethodName+MethodSig}
					ModifierPremission methodPremission= ModifierPremission.Get(sp[1]);
					ArrayList<ModifierAttribute> methodAttributes = new ArrayList<ModifierAttribute>();
					for(int i = 2;i < sp.length - 1 ;i++){
						methodAttributes.add(ModifierAttribute.Get(sp[i]));
					}
					String[] sp1 = sp[sp.length-1].split("\\(");
					String methodName = sp1[0];
					ArrayList<String> args = PraseMethodArgs(sp1[1].split("\\)")[0]);
					String returnType  = sp1[1].split("\\)")[1];
					SmaliMethod method = new SmaliMethod(methodPremission,methodAttributes,args,returnType,className,methodName,lineInFile);
					methods.add(method);
				}
				lineInFile++;
			}
			reader.close();
			return new SmaliClass(premission,attributes,fields,methods,className,file);
		} catch (IOException e) {
			System.out.println("[*PraseClassError]IOException: " + e.toString());
			return null;
		}
	}
}
