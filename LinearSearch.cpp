#include<iostream>
using namespace std;
int linerSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int key;
    cin>>key;
    cout<<"enter";
    cout<<linerSearch(array,n,key)<<endl;
    return 0;
}
