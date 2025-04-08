#include<iostream>
using namespace std;
int main(){
    int n,remainder,sum = 0,temp;
    cout<<"Enter the number"<<endl;
    cin>>n;
    temp = n;
    while(n>0){
        remainder = n%10;
        sum = (sum * 10 ) + remainder;
        n = n/10;
    }
    if(temp == sum){
        cout<<"The number is a palindrome"<<endl;
    }
    else{
        cout<<"The number is not a palindrome"<<endl;
        }
        return 0;
}