#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str = "hello anil";
    reverse(str.begin(),str.end());
    cout<<"reversed string: "<<str<<endl;
}