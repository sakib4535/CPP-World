#include <iostream>
#include <cmath>

using namespace std;

class Quadrilateral {
protected: 
    double side1, side2, side3, side4;

public:
    Quadrilateral(double s1, double s2, double s3, double s4){
        side1 = s1;
        side2 = s2;
        side3 = s3;
        side4 = s4;
    }
    virtual double perimeter() {
        return side1 + side2 + side3 + side4;
    }
};

class Rectangle : public Quadrilateral {
public:
    Rectangle(double s1, double s2) : Quadrilateral(s1, s2, s1, s2){}
    double perimeter() override {
        return 2 * (side1 + side2);
    }
    double area(){
        return side1 + side2;
    }
};

class Square : public Rectangle {
public:
    Square(double s1) : Rectangle(s1, s1) {}
    double area(){
    return side1 * side2;
    }
};


class Trapezoid : public Quadrilateral {
private:
    double height;
public:
    Trapezoid(double s1, double s2, double s3, double s4, double h) : Quadrilateral(s1, s2, s3, s4) {
        height = h;
    }
    double area() {
        return ((side1 + side2) / 2) * height;
    }
};

int main() {
    Rectangle rectangle(4.0, 6.0);
    Square square(5.0);
    Trapezoid trapezoid(3.0, 5.0, 4.0, 7.0, 2.0);

    cout << "Perimeter of rectangle: " << rectangle.perimeter() << endl;
    cout << "Area of rectangle: " << rectangle.area() << endl;

    cout << "Perimeter of square: " << square.perimeter() << endl;
    cout << "Area of square: " << square.area() << endl;

    cout << "Perimeter of trapezoid: " << trapezoid.perimeter() << endl;
    cout << "Area of trapezoid: " << trapezoid.area() << endl;

    return 0;
}