#include<iostream>
#include<string>
using namespace std;
class Human{
    private:
        int age;
        string name;
    public:
        Human():age(10),name("anil nemani"){}
        Human(int a,const stirng& n):age(a),name(n){}
        Human(const Human  &h):age(h.age),name(h.name) {}
        void display() const { cout<<"Age : " << age << "\tName : " << name << endl;}
};

int main()
{
    //creating objects using default constructor
    Human h1;
    h1.display();
    
    //creating an object using parameterized constructor
    Human h2(35,"Ankush");
    h2.display();
    
    //copying constructors
    Human h3=h1;
    h3.display();
    
    Human h4(h3);
    h4.display();
    
    return 0;
}

