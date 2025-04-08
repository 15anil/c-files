#include<iostream>
#include<string>
using namespace std;
bool is_plainfrome(const string& s){
    int left = 0;
    int right = s.length()-1;
    while(left<right){
        if(s[left] != s[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main(){
    string s1 = "radar";
    string s2 = "hello";
    cout<<boolalpha;
    cout<<is_plainfrome(s1)<<endl;
    cout<<is_plainfrome(s2)<<endl;
}
