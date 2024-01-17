#include <iostream>

class Shape {
public:
    virtual void draw() {
        std::cout << "Drawing a generic shape." << std::endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a circle." << std::endl;
    }
};

int main() {
    Shape s;
    s.draw();
    Circle c;
    c.draw();
}
