#include<iostream>
using namespace std;
int main(){
    int num = 42;
    int* ptr = &num;
    cout<<"value of num is: "<< num << endl;
    cout<<"value of num with ptr: "<< *ptr << endl;
    cout<<"value of &num is: "<< &num << endl;
    cout<<"value of pointer is: "<< ptr << endl;
}