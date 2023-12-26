#include<iostream>
#include<string.h>
using namespace std;
class encapsulation{
    private:
        string name;
        int age;
        double gpa;
    public:
        void setName(string newName){
            name = newName;
        }
        string getName(){
            return name;
        }
        void setAge(int newAge){
            if(newAge>=0){
                age = newAge;
            }else{
                cout<<"invalid age:"<<endl;
            }
        }
        int getAge(){
            return age;
        }
        void setGpa(double newGpa){
            if(newGpa>=0.0 && newGpa<=10.0){
                gpa = newGpa;
            }else{
                cout<<"invalid gpa"<<endl;
            }
        }
        double getGpa(){
            return gpa;
        }
};
int main(){
    encapsulation e;
    e.setName("anil nemani");
    e.setAge(21);
    e.setGpa(7.6);
    cout<<"student name: "<<e.getName()<<endl;
    cout<<"student age: "<<e.getAge()<<endl;
    cout<<"student gpa: "<<e.getGpa()<<endl;
}