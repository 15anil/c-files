#include<iostream>
using namespace std;
int sum(int n){
    if(n == 0){
        return 0;
    }
    int previus_sum = sum(n-1);
    return n + previus_sum;
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n)<<endl;

}