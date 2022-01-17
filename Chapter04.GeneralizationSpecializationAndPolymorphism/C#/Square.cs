class Square : Rectangle {
    //use the keyword "base" to inherit the constructor from base class (Rectangle)
    public Square(float a) : base(a, a) {
        
    }

    public override string className()
    {
        return "Square";
    }
}