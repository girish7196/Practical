#include <iostream>
#include <cmath> // Header for mathematical functions
using namespace std;

const double PI = 3.14159;

class Shape {
public:
    virtual double Area() const = 0;
    virtual double Perimeter() const = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double rad) {
        radius = rad;
    }

    double Area() const override {
        return PI * radius * radius;
    }

    double Perimeter() const override {
        return 2 * PI * radius;
    }
};
class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double len, double wid) {
        length = len;
        width = wid;
    }

    double Area() const override {
        return length * width;
    }

    double Perimeter() const override {
        return 2 * (length + width);
    }
};

class Triangle : public Shape {
private:
    double side1, side2, side3;

public:
    Triangle(double s1, double s2, double s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    double Area() const override {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double Perimeter() const override {
        return side1 + side2 + side3;
    }
};

int main() {
    Circle c(7.0);
    Rectangle r(4.2, 8);
    Triangle t(4.0, 4.0, 3.2);

    cout << "Circle: " << endl;
    cout << "Area: " << c.Area() << endl;
    cout << "Perimeter: " << c.Perimeter() << endl;

    cout << "Rectangle " << endl;
    cout << "Area: " << r.Area() << endl;
    cout << "Perimeter: " << r.Perimeter() << endl;

    cout << "Triangle" << endl;
    cout << "Area: " << t.Area() << endl;
    cout << "Perimeter: " << t.Perimeter() << endl;

    return 0;
}
