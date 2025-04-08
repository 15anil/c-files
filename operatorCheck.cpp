#include<iostream>
using namespace std;
class Myclass{
    private:
        int value;
    public:
        Myclass(int val):value(val){}
        bool operator==(const Myclass& other){
            return this->value == other.value;
        }
};
int main(){
    Myclass obj1(10);
    Myclass obj2(10);
    Myclass obj3(5);
    if(obj1 == obj2){
        cout<<"obj1 is equal to obj2"<<endl;
    }else{
        cout<<"not equal"<<endl;
    }
    if (obj1 == obj3) {
        std::cout << "obj1 is equal to obj3" << std::endl;
    } else {
        std::cout << "obj1 is not equal to obj3" << std::endl;
    }
    return 0;
}