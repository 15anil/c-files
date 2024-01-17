#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp; 
    }
    
}
int main(){
    int n;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionSort(arr,n);
    cout<<"sorted array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
}