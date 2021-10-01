class Fraction
{
    //allow a constructor of a class to call another one of the same class
    private int numerator;

    private int denominator;

    public Fraction() : this(0, 1)
    {
        //call the other constructor
    }

    public Fraction(int num, int den)
    {
        this.numerator = num;
        this.denominator = den;
    }
}

