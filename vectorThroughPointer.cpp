#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> names;
    names.push_back("larry");
    names.push_back("anil");
    names.push_back("nemani");

    vector<string> *vector_ptr = nullptr;
    vector_ptr = &names;
    cout << "first name: " << (*vector_ptr).at(0) << endl;

    return 0;
}
