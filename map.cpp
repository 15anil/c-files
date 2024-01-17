#include<iostream>
#include<map>
#include<set>
using namespace std;
int main(){
    map<int,string> mymap;
    mymap[1] = "one";
    mymap[2] = "two";
    mymap[1] = "three";
    for(const auto& pair : mymap){
        cout<<"key: "<<pair.first<<"second: "<<pair.second<<endl;
    }
    set<int> myset;
    myset.insert(3);
    myset.insert(4);
    myset.insert(3);
    for(const auto& pair : myset){
        cout<<pair<<endl;
    }
}