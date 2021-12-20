//use keyword "extends" to define a child class
class Rectangle extends Figure {
    private float width, height;

    public Rectangle(float w, float h) {
        width = w;
        height = h;
    }

    //String is not considered as a keyword of language,
    //it doesn't have color in text editor
    public String className() {
        return "Rectangle";
    }

    public float area() {
        return width * height; 
    }
}