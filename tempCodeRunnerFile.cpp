#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<map>
using namespace std;
int main(){
    map<int,string> myMap;
    int n;
    cout<<"enter the number of elements: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int key;
        string value;
        cout<<"Enter the key "<<(i+1)<<": ";
        cin>>key;
        cout<<"Enter the value for the"<< key <<": ";
        cin.ignore();
        getline(cin,value);
        myMap[key] = value;
    }
    cout<<"Elements of myMap are: "<<endl;
   for(const auto& pair:myMap){
    cout<<"\tkey: "<<pair.first<<"\tValue: "<<pair.second<<endl;
   }
   return 0;4

}