using System;

class classA
{
    public classA()
    {
        logging();
    }

    public virtual void logging()
    {
        Console.WriteLine("The logging method of class A\n");
    }
}

class classB : classA
{
    public classB()
    {

    }

    public override void logging()
    {
        Console.WriteLine("The logging method of class B\n");
    }
}

class Program
{
    static void Main(string[] args)
    {
        classB b = new classB();
    }
}
