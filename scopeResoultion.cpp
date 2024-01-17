#include<iostream>
// using namespace std;
int x = 5;
int main(){
    int x = 55;
    std::cout<<"local x: "<<x<<std::endl;
    std::cout<<"global x: "<<::x<<std::endl;
}