#include<iostream>
using namespace std;
int main(){
    int *ptr1 = new int(42);
    int *ptr2 = ptr1;
    delete ptr1;
    cout<<"value of ptr 2 is: "<<*ptr2<<endl;
    return 0;
}