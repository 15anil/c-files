#include<iostream>
using namespace std;
int factorial(int num){
    int fact = 1;
    for(int i=2;i<=num;i++){
        fact *= i;
    }
    return fact;
}
int main(){
    int n;
    cin>>n;
    int ans = factorial(n);
    cout<<ans<<endl;
    return 0;
}