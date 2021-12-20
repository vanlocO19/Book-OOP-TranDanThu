class Rectangle : Figure {
    private float width, height;

    public Rectangle(float w, float h) {
        width = w;
        height = h;
    }

    //to re-write the method
    // public new string className() {
    //     return "Rectangle";
    // }

    // public new float area() {
    //     return width * height;
    // }

    //to use polymorphism
    public override string className()
    {
        return "Rectangle";
    }

    public override float area() {
        return width * height;
    }
}