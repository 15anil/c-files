#include<iostream>
using namespace std;
class Shape{
    public:
        virtual void draw() const = 0;
        void displayInfo(){
            cout<<"this is a shape."<<endl;
        }
};
class Circle : public Shape{
    public:
        void draw() const {
            cout<<"drawing a rectangle"<<endl;
        }
};
class Rectangle : public Shape{
    public:
        void draw() const{
            cout<<"this is a rectangle"<<endl;
        }
};
int main(){
    // Shape shape;
    Circle circle;
    Rectangle rectangle;
    circle.draw();
    circle.displayInfo();
    rectangle.draw();
    rectangle.displayInfo();
    return 0;

}