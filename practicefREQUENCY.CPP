#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"enter a string"<<endl;
    cin>>str;
    int freq[256] = {0};
    for(char c: str){
        freq[c]++;
    }
    for(char c='a';c<='z';c++){
        cout<<c<<": "<<freq[c]<<endl;
    }
    return 0;
}