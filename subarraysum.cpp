#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mx = INT_MIN;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int curr = 0;
    for(int i=0;i<n;i++){
        curr = 0;
        for(int j=i;j<n;j++){
            curr += array[j];
            cout<<curr<<" ";
        }
    }
    return 0;
}