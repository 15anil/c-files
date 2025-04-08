#include<iostream>
using namespace std;
int main(){
    int scores[] = {23,13,45,67};
    int *score_ptr = scores;
    cout<<"memeory value of first value is: "<<scores<<endl;
    cout<<"memory value of first value using pointer; "<<score_ptr<<endl;
    cout<<"Array subscript notation are.................. "<<endl;
    cout<<scores[0]<<endl;
    cout<<scores[1]<<endl;
    cout<<scores[2]<<endl;
    cout<<scores[3]<<endl;
    cout<<"pointer subscript notation are.................. "<<endl;
    cout<<score_ptr[0]<<endl;
    cout<<score_ptr[1]<<endl;
    cout<<score_ptr[2]<<endl;
    cout<<score_ptr[3]<<endl;
    cout<<"pointer offset notation........................"<<endl;
    cout<<*score_ptr<<endl;
    cout<<*(score_ptr+1)<<endl;
    cout<<*(score_ptr+2)<<endl;
    cout<<"Array offset notation..........................."<<endl;
    cout<<*scores<<endl;
    cout<<*(scores+1)<<endl;
    cout<<*(scores+2)<<endl;
}