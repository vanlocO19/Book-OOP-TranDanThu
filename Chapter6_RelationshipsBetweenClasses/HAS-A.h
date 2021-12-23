class Point {
private:
    double x, y;

public: 
    double getX() const;

    double getY() const;

    void setX(const double&);

    void setY(const double&);
};

class Triangle {
private:
    Point arrPoint[3];

public:
    void setVertices(Point*);

    double area() const;

    double perimeter() const;
};