#include<iostream>
using namespace std;

class students {
private:
    string name;
    int age;
    char gender;

public:
    // Default constructor
    students() {
        cout<<"default"<<endl;
    }

    // Parameterized constructor
    // students(const string& n, int a, char g) : name(n), age(a), gender(g) {}
    students(string s,int a,char g){
        name = s;
        age = a;
        gender = g;
    }

    // Function to print student details
    void print() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};

int main() {
    string name;
    int age;
    char gender;
    cout<<"enter name: "<<endl;
    cin>>name;
    cout<<"enter age: "<<endl;
    cin>>age;
    cout<<"enter gender: "<<endl;
    cin>>gender;
    students stu(name,age,gender);
    stu.print();
    students dc;

    return 0;
}
