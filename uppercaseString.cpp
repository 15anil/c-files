#include<iostream>
using namespace std;
int main(){
    string str = "abcdefghijklmnopqrst";//convert to uppercase
    for(int i=0;i<str.size();i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i] -= 32;
        }
    }
    cout<<str<<endl;
    cout<<"using transform"<<endl;
    string str1 = "abcdefghijklmnopqrst";//convert to uppercase
    transform(str1.begin(),str1.end(),str1.begin(),::toupper);
    cout<<str1<<endl;
}