#include<iostream>
using namespace std;
int main(){
    // int a = 10;
    // int* aptr = &a;
    // cout<<aptr<<endl;
    // aptr++;
    // cout<<aptr<<endl;
    int arr[3] = {10,20,30};
    // cout<<*arr<<endl;
    int *ptr = arr;
    for(int i=0;i<3;i++){
        cout<<*ptr<<endl;
        ptr++;
    } 
}