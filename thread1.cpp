#include<iostream>
#include<thread>
using namespace std;
void threadFunction(){
    cout<<"thread is running"<<endl;
}
void printThreadMessage(string& message){
    cout<<"this is a thread message"<<endl;
}
int main(){
   thread myThread(threadFunction);
   myThread.join();
   cout<<"main thread is done"<<endl;
   string message = "this is a thread message";
   thread messageThread(printThreadMessage,ref(message));
   messageThread.join();
   return 0;
}