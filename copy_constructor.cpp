#include<iostream>
using namespace std;

class A {
    int x, y;

public:
    // Make the constructor public
    A(int x, int y) {
        this->x = x;
        this->y = y;  // Corrected the assignment
        cout<<"copy constructor called "<<"x: "<< x <<" y: "<<y<<endl;
    }
};

int main() {
    A a1(2, 3);
    A a2 = a1;

    return 0;
}
