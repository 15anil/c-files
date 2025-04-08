#include<iostream>
using namespace std;
#define SQUARE(a) ((a)*(a))
int main(){
    int result = SQUARE(5);
    int result1 = ((5)*(5));
    int result2 = 100/SQUARE(5);
    cout<<result<<endl;
    cout<<result1<<endl;
    cout<<result2<<endl;
}