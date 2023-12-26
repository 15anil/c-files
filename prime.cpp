#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool flag = 0;
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"non prime";
            flag= 1;
            break;
        }
    }
     if(flag == 0){
            cout<<"prime number"<<endl;
        }
    return 0;
}