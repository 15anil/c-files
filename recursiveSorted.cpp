#include<iostream>
using namespace std;
bool isSorted(int arr[],int n){
    if(n<=1){
        return n;
    }
    return (arr[n-1]>arr[n-2]) && isSorted(arr,n-1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(isSorted(arr,n)){
        cout<<"array is sorted:"<<endl;
    }else{
        cout<<"not sorted"<<endl;
    }
}