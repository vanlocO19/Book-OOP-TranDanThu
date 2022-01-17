
public class Point2D {
	double x, y;
	
	void set(double x0, double y0) {
		this.x = x0;
		this.y = y0;
	}
	
	void move(double dx, double dy) {
		this.x += dx;
		this.y += dy;
	}
	
	void scale(double sx, double sy) {
		this.x *= sx;
		this.y *= sy;
	}
}
