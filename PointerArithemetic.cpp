#include<iostream>
using namespace std;
int main(){
    // int scores[] = {100,20,40,89,-1};
    // int *score_ptr = scores;
    // while(*score_ptr != -1){
    //     cout<<*score_ptr<<endl;
    //     score_ptr++;
    // }
    // cout<<*score_ptr<<endl;
    // string s1 = "anil";
    // string s2 = "anil";
    // string s3 = "nemani";
    // string *p1 = &s1;
    // string *p2 = &s2;
    // string *p3 = &s1;
    // cout<<boolalpha;
    // cout<<p1<<"=="<<p2<<": "<<(p1==p2)<<endl;
    // cout<<p1<<"=="<<p3<<": "<<(p1==p3)<<endl;
    // cout<<*p1<<"=="<<*p3<<": "<<(*p1==*p3)<<endl;
    // cout<<*p1<<"=="<<*p2<<": "<<(*p1==*p2)<<endl;
    char name[] = {"Frank"};
    char *char_ptr1 = nullptr;
    char *char_ptr2 = nullptr;
    char_ptr1 = &name[0];
    char_ptr2 = &name[3];
    cout<<"in the string name: "<<name<<" differnece between characters is: "<<(char_ptr2-char_ptr1)<<" characters away from"<<*char_ptr1<<endl;

}