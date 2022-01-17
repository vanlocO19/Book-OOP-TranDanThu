//use the keyword "abstract" to create abstract classes
abstract class Figure {
    //use the polymorphism
    // public virtual float area() {
    //     return 0;
    // }

    //use the keyword "abstract" to define an abstract method (aka pure virtual method in C++)
    public abstract float area();

    public virtual string className() {
        return "Figure";
    }
}
