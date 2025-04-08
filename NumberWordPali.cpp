#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool isNumberPalindrome(int number){
    int original = number;
    int reversed = 0;
    while(number > 0){
        int digit = number % 10; //fetch last digit
        reversed = reversed * 10 + digit;
        number /= 10;
    }
    return original == reversed;
}
bool isStringPalindrome(const string &str){
    int left = 0;
    int right = str.length() - 1;
    while(left < right){
        if(str[left] != str[right]){
            return false;
    }else{
        left++;
        right--;
    }
    return true;
}
}
int main(){
    int num;
    cout << "Enter a number: ";
    cin>>num;
    if(isNumberPalindrome(num)){
        cout << num << " is a palindrome number." << endl;
    }else{
        cout<< num << " is not a palindrome number. " << endl;
    }
    string str1;
    cout << "Enter a string: ";
    cin >> str1;
    if(isStringPalindrome(str1)){
        cout << str1 << " is a palindrome string." << endl;
    }else{
        cout << str1 << " is not a palindrome string." << endl;
    }
    return 0;
}