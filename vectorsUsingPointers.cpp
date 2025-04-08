#include <iostream>
#include <vector>
#include <string>
using namespace std;

void display(vector<string> *v) {
    for (auto &str : *v) {
        cout << str << " ";
    }
    cout << endl;  // Move this line outside the loop
    (*v).at(0) = "funny";
}

int main() {
    cout << "---------------------" << endl;
    vector<string> names;
    names.push_back("anil");
    names.push_back("nemani");
    names.push_back("sai");
    names.push_back("pavan");
    display(&names);
    cout << endl;

    return 0;  // Added a return statement for completeness
}
