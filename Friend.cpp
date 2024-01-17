#include<iostream>
using namespace std;

class A {
    int x, y;

public:
    A(int x, int y) {
        this->x = x;  // Use this pointer to refer to class members
        this->y = y;
    }

    friend void showValues(const A& obj);
};

void showValues(const A& obj) {
    cout << "x: " << obj.x << " y: " << obj.y << endl;
}

int main() {
    A a(3, 2);
    showValues(a);

    return 0;
}
