
//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;
//using System.Threading.Tasks;

//namespace Chapter1_ClassAndObject_CSharp
//{

//}

class Point2D
{
    double x, y;
    public void set(double x0, double y0)
    {
        x = x0;
        y = y0;
    }

    public void move(double dx, double dy)
    {
        x += dx;
        y += dy;
    }

    public void scale(double sx, double sy)
    {
        x *= sx;
        y *= sy;
    }
} //end of the Point2D class
