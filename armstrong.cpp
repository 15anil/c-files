#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int original = n;
    int sum = 0;
    while(n>0){
        int last = n%10;
        sum += pow(last,3);
        n = n/10;
    }
    if(sum == original){
        cout<<"armstrong number"<<endl;
    }else{
        cout<<"not an armstrong number "<<endl;
    }
}