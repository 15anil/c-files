#include<iostream>
using namespace std;
void pattern(int n){
    int num = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}
int main(){
    int n = 5;
    pattern(n);
    return 0;
}