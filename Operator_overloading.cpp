#include<iostream>
using namespace std;
class complex{
    private:
        float r,i;
    public:
        complex(float r,float i){
            this->r = r;
            this->i = i;
        }
        complex(){}
        void display_data(){
            cout<<"real part= "<<r<<endl;
            cout<<"imaginary part= "<<i<<endl;
        }
        complex operator +(const complex& c){
            return complex(r + c.r,i + c.i);
        }
};
int main(){
    complex a(2,3);
    complex b(4,5);
    complex c = a + b;
    c.display_data();
    return 0;
}