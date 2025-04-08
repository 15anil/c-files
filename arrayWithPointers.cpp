#include<iostream>
using namespace std;
int main(){
    int scores[] = {100,200,300};
    cout<<scores<<endl;//scores is the address of the first element in an array
    cout<<*scores<<endl;//gives the first value of scores
    int *score_ptr = scores;
    int size = sizeof(scores)/sizeof(scores[0]);
    for(int i=0;i<size;i++){
        cout<<*score_ptr<<endl;
        score_ptr++;
    }
    cout<<endl;
    return 0;
}