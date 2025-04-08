#include<iostream>
using namespace std;

class Complex {
    int real, img;
public:
    Complex(int r, int i) : real(r), img(i) {}
    void display() {
        cout << real << " +i" << img << endl;
    }
    Complex operator+(const Complex& c2) {
        return Complex(real + c2.real, img + c2.img);
    }
};

int main() {
    Complex c1(10, 5), c2(3, 4);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}
