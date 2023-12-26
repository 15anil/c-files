#include<iostream>
using namespace std;
int main(){
    string s = "12345";
    sort(s.begin(),s.end(),greater<int>());
    cout<<s<<endl;
}