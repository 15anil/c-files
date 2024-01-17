#include<iostream>
#include<thread>
// using namespace std;
void myFunction(){
    std::cout<<"hello from a thread"<<std::endl;
}
void printMessage(const std::string& message){
    std::cout<<message<<std::endl;
}
int main(){
    std::string msg = "hello this is another thread";
    std::thread1 t1(printMessage,msg);
    std::thread t(myFunction);
    t.join();
}