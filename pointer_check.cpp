#include<iostream>
using namespace std;
int main(){
    // int score = 10;
    // int *score_ptr = &score;
    // cout<<score_ptr<<endl;
    // cout<<&score<<endl;
    // cout<<"dereferenced value of score_ptr is: "<<*score_ptr<<endl;
    // *score_ptr = 200;//value is ovveriden
    // cout<<"dereferenced value is: "<<*score_ptr<<endl;
    int *int_ptr = nullptr;
    int_ptr = new int;
    cout<<int_ptr<<endl;
    cout<<*int_ptr<<endl;
    *int_ptr = 100;
    cout<<*int_ptr<<endl;
    delete int_ptr;


}