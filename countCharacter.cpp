#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main() {
    string str = "pavanaditya";
    unordered_map<char, int> count_str;

    for (char i : str) {
        if (count_str.find(i) != count_str.end()) {
            count_str[i]++;
        } else {
            count_str[i] = 1;
        }
    }

    cout << "Count of each characters:\n";
    for (const auto& pair : count_str) {
        cout << pair.first << ": " << pair.second << endl;
    }
    
    return 0;
}
