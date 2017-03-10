import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Random;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Utils {
	public static ArrayList<String> ArrayNameTable = new ArrayList<String>();
	public static ArrayList<String> SmaliMethodNameTable = new ArrayList<String>();
	public static ArrayList<String> NativeMethodNameTable = new ArrayList<String>();
	
	
	
	/**
	 * @param i ArrayNameTable = 0;
	 * SmaliMethodNameTable = 1;
	 * NativeMethodNameTable = 2
	 * **/
	public static String GetRandomMethodName(int i){
		Random random = new Random();
		String name = "sub_"+random.nextInt(1000)+"_"+random.nextInt(1000);
		switch(i){
		case 0:
			name = "arr_"+random.nextInt(1000)+"_"+random.nextInt(1000);
			if(ArrayNameTable.indexOf(name) == -1){
				ArrayNameTable.add(name);
				return name;
			}
			break;
		case 1:
			if(SmaliMethodNameTable.indexOf(name) == -1){
				SmaliMethodNameTable.add(name);
				return name;
			}
			break;
		case 2:
			if(NativeMethodNameTable.indexOf(name) == -1){
				NativeMethodNameTable.add(name);
				return name;
			}
			break;
		}
		return GetRandomMethodName(i);
	}

	public static String FindMainClass(File maniFile){
		String appRegex = "<application .{0,256} android:name=\"([a-zA-Z0-9\\._%]{0,128})\" .{0,256}>";
		String activityRegex = "<activity .{0,256} android:name=\"([a-zA-Z0-9\\._%]{0,128})\" .{0,256}>";
		Pattern pattern = Pattern.compile(appRegex);
		try {
			BufferedReader reader = new BufferedReader(new FileReader(maniFile));
			String line;
			while( (line = reader.readLine()) != null){
				Matcher matcher = pattern.matcher(line);
				if(matcher.find()){
					return matcher.group(1);
				}
			}
			reader.close();
			String currentActivity = "";
			pattern = Pattern.compile(activityRegex);
			reader = new BufferedReader(new FileReader(maniFile));
			while( (line = reader.readLine()) != null){
				Matcher matcher = pattern.matcher(line);
				if(matcher.find()){
					currentActivity =  matcher.group(1);
				}
				if(line.indexOf("android.intent.category.LAUNCHER") != -1){
					return currentActivity;
				}
			}
			reader.close();
		} catch (FileNotFoundException e) {
			System.out.println("[*FindMainClassError]FileNotFound: " + e.toString());
		} catch (IOException e) {
			System.out.println("[*FindMainClassError]IOException: "+ e.toString());
		}
		return null;
	}

	public static ArrayList<File> GetInDirFiles(File dir){
		ArrayList<File> fileList = new ArrayList<File>();
		if(!dir.isDirectory()){
			return fileList;
		}
		File[] list = dir.listFiles();
		if(list == null){
			return fileList;
		}
		for(File file : list){
			if(file.isDirectory()){
				fileList.addAll(GetInDirFiles(file));
			}
			else{
				fileList.add(file);
			}
		}
		return fileList;
	}
}
