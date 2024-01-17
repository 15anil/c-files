#include <iostream>
#include <string>

using namespace std;

// Abstract class representing a general shape
class Shape {
public:
    // Pure virtual function for calculating area
    virtual double calculateArea() const = 0;

    // Pure virtual function for displaying shape information
    virtual void displayInfo() const = 0;
};

// Concrete class representing a specific shape: Circle
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor
    Circle(double r) : radius(r) {}

    // Override the calculateArea function
    double calculateArea() const override {
        return 3.14 * radius * radius;
    }

    // Override the displayInfo function
    void displayInfo() const override {
        cout << "Circle - Radius: " << radius << ", Area: " << calculateArea()<<endl;
        
    }
};

// Concrete class representing a specific shape: Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w) : length(l), width(w) {}

    // Override the calculateArea function
    double calculateArea() const override {
        return length * width;
    }

    // Override the displayInfo function
    void displayInfo() const override {
        cout << "Rectangle - Length: " << length << ", Width: " << width << ", Area: " << calculateArea() << endl;
    }
};

int main() {
    // Creating objects of concrete classes
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    // Using the abstract class pointers to access the common interface
    Shape* shape1 = &circle;
    Shape* shape2 = &rectangle;

    // Calling functions through the abstract class pointers
    shape1->displayInfo();
    shape2->displayInfo();

    return 0;
}
