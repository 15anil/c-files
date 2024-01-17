#include<iostream>
using namespace std;
int main(){
    int* ptr;
    int value = 42;
    ptr = &value;
    cout<<ptr<<endl;
    cout<<value<<endl;
    cout<<*ptr<<endl;
}