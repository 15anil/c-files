#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

string removeDuplicates(const string& str) {
    unordered_set<char> seen;
    string result;

    for (char c : str) {
        if (seen.find(c) == seen.end()) {
            seen.insert(c);
            result += c;
        }
    }

    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string result = removeDuplicates(input);
    cout << "String after removing duplicates: " << result << endl;

    return 0;
}
