import java.util.ArrayList;
import java.util.Random;

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
		String name = "sub_"+random.nextInt(1000);
		switch(i){
		case 0:
			name = "arr_"+random.nextInt(1000);
			if(ArrayNameTable.indexOf(name) == -1){
				return name;
			}
			break;
		case 1:
			if(SmaliMethodNameTable.indexOf(name) == -1){
				return name;
			}
			break;
		case 2:
			if(NativeMethodNameTable.indexOf(name) == -1){
				return name;
			}
			break;
		}
		return GetRandomMethodName(i);
	}
}
