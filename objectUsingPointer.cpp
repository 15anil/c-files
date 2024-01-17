#include<iostream>
class Myclass{
    public:
        int data;
        Myclass(int val){
            data = val;
        }
        void display(){
            std::cout<<"Data: "<<data<<std::endl;
        }
};
int main(){
    Myclass* myclass = new Myclass(42);
    myclass->display();
    myclass->data = 100;
    myclass->display();
    delete  myclass;
    return 0;
}