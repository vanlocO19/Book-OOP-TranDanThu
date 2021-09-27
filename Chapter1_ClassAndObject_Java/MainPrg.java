import java.util.*;

public class MainPrg {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Circle mycir = new Circle();
		
		double r = 10;
		
		mycir.set(r);
		
		System.out.println("Radius = " + r);
		System.out.println("Area = " + mycir.area());
		System.out.println("Perimeter = " + mycir.perimeter());
	}

}
