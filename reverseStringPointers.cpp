#include<iostream>
#include<string>
using namespace std;
void reverseString(char* str){
    int len = strlen(str);
    char *start = str;
    char *end = str + len-1;
    while(start<end){
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
int main(){
    char mystring[] = "hello world";
    cout<<"original string: "<<mystring<<endl;
    reverseString(mystring);
    cout<<"after reversing: "<<mystring<<endl;
    return 0;
}