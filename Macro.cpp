#include<iostream>
using namespace std;
#define PI 3.1459
double caluclateArea(double radius){
    return PI * radius * radius;
}
int main(){
    double radius;
    cout<<"Enter the radius: "<<endl;
    cin>>radius;
    double area = caluclateArea(radius);
    cout<<"Area of cirlce is: "<<area<<endl;
}