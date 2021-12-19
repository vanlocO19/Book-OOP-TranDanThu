using System;

class Program
{
    static void Main(string[] argv)
    {
        Circle mycir = new Circle();
        double r = 10;

        mycir.set(r);

        Console.WriteLine("R = " + r);
        Console.WriteLine("Area = " + mycir.area());
        Console.WriteLine("Perimeter = " + mycir.perimeter());
        Console.ReadLine();
    }
}
