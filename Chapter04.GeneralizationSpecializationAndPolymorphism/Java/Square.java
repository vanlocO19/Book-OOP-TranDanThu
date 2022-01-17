class Square extends Rectangle {
    public Square(float a) {
        //the keyword "super" is used to call the constructor of the parent class
        super(a, a);
    }

    public String className() {
        return "Square";
    }
}