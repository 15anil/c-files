#include<iostream>
using namespace std;
class Caluclator{
    public:
        int add(int a,int b){
            return a+b;
        }
        double add(double a,double b){
            return a+b;
        }
};
int main(){
    Caluclator c;
    cout<<"int method: "<<c.add(5,7)<<endl;
    cout<<"double method: "<<c.add(5.67,3.33)<<endl;
}