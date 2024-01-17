#include<iostream>
using namespace std;
class base{
    public:
        virtual void print(){
            cout<<"base class"<<endl;
        }
        void display(){
            cout<<"base class display function"<<endl;
        }
};
class derived:public base{
    public:
        void print(){
            cout<<"this is derived class"<<endl;
        }
        void display(){
            cout<<"derived class display method"<<endl;
        }
};
int main(){
    base *baseptr;
    derived d;
    baseptr = &d;
    baseptr -> print();
    baseptr -> display();
    //here we created a base pointer initially and created an instance of derived now we assigned derived 
    //address to base pointer and when we call it initially we only get the base class methods but after 
    //using virtual keyword in base class method the derived method will be called 
    //this is called dynamic binding at runtime 
}