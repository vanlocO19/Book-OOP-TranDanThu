import java.util.*;

public class TwoDArray {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		float[][] a;
		int m, n;
		m = 3; n = 4;
		
		a = new float[m][n];
		
		if (a != null) {
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++) {
					a[i][j] = i * j;
					System.out.print(a[i][j]);
					System.out.print(" ");
				}
				System.out.println();
			}
		}
		
	}

}
