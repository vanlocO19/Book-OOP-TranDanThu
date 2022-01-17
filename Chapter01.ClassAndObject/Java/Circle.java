
public class Circle {
	final double PI = 3.14159;
	
	private Point2D center = new Point2D();
	private double radius;
	
	void set(double x0, double y0, double r) {
		this.center.set(x0, y0);
		this.set(r);
	}
	
	void set(double r) {
		if (r < 0) {
			r = 0;
		}
		
		this.radius = r;
	}
	
	void move(double dx, double dy) {
		center.move(dx, dy);
	}
	
	double area() {
		return PI * this.radius * this.radius;
	}
	
	double perimeter() {
		return 2 * PI * this.radius;
	}
}
