#include<iostream>
using namespace std;
void swap(int a,int b){
    int temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b<<endl;
}
int main(){
    int a = 10,b = 20;
    // cout<<"before swap: "<<a<<b<<endl;

    swap(a,b);
}