#include<iostream>
using namespace std;
class Car{
    public:
    string name;
    int age;
    double price;
     void displayInfo(){
        cout<<"name of the car is: "<< name <<endl;
        cout<<"age: "<< age <<endl;
        cout<< "price: $" << price << endl;
     }
};
int main(){
    Car mycar;
    mycar.name = "tata tiago";
    mycar.age = 5;
    mycar.price = 673000.50;
    mycar.displayInfo();
    return 0;
}