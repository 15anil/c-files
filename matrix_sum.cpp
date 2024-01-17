#include<iostream>
using namespace std;
int main(){
    int a[5][5],b[5][5],sum[5][5],r1,c1,r2,c2,i,j;
    cout<<"enter the order of the first matrix"<<endl;
    cin>>r1>>c1;
    cout<<"enter the order of the second matrix"<<endl;
    cin>>r2>>c2;
    //taking the values in the first matrix format
    cout<<"enter values of first matrix: "<<endl;
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            cin>>a[i][j];
        }
    }
    cout<<"enter value of second matrix: "<<endl;
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            cin>>b[i][j];
        }
    }
    if(r1 == r2&&c1 == c2){
        for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            sum[i][j] = a[i][j]+b[i][j];
        }
    }
    cout<<"sum of two matrix is: "<<endl;
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            cout<<sum[i][j]<<"\t";
        }
    }
    }
    else{
        cout<<"matrices are not compaitable"<<endl;
    }
    return 0;
}