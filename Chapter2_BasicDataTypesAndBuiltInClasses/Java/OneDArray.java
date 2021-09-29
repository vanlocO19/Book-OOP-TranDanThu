import java.util.*;

public class OneDArray {
	static float[] initArray(int n) {
		float [] a;
		a = new float[n];
		
		for (int i = 0; i < n; i++) {
			a[i] = 1 / (1 + i * (float)i);
		}
		
		return a;
	}
	
	static void showArray(float[] a) {
		for (int i = 0; i < a.length; i++) {
			System.out.println(a[i]);
		}
	}
	
	//public static void main(String[] args) {
		// TODO Auto-generated method stub
		//int n = 10;
		//float[] a = initArray(n);
		//showArray(a);
	//}
	
}
