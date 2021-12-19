//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;
//using System.Threading.Tasks;

//namespace Chapter1_ClassAndObject_CSharp
//{
//    class Circle
//    {
//    }
//}

class Circle
{
    const double PI = 3.14159;

    Point2D center = new Point2D();

    double radius;

    public void set(double x0, double y0, double r)
    {
        this.center.set(x0, y0);
        this.set(r);
    }

    public void set(double r)
    {
        //ensure that the radius is nonnegative.
        if(r < 0)
        {
            r = 0;
        }

        this.radius = r;
    }

    public void move(double dx, double dy)
    {
        this.center.move(dx, dy);
    }

    public double area()
    {
        return PI * radius * radius;
    }

    public double perimeter()
    {
        return 2 * PI * radius;
    }
}
