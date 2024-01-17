#include<iostream>
using namespace std;
class college{
    public:
        void fun(){
            cout<<"function with 0 args"<<endl;
        }
        void fun(int x){
            cout<<"function with int args"<<endl;
        }
        void fun(double x){
            cout<<"funcion with double argument"<<endl;
        }
};
int main(){
    college c;
    c.fun();
    c.fun(4);
    c.fun(6.2); 
}