class Rectangle : Figure {
    private float width, height;

    public Rectangle(float w, float h) {
        width = w;
        height = h;
    }

    public new string className() {
        return "Rectangle";
    }

    public new float area() {
        return width * height;
    }
}