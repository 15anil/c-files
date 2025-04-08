#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

void printDuplicates(const string& str) {
    unordered_map<char, int> charCount;

    // Count occurrence of each character
    for (char c : str) {
        charCount[c]++;
    }

    // Print characters with count > 1
    cout << "Duplicate characters: ";
    for (auto pair : charCount) {
        if (pair.second > 1) {
            cout << pair.first << " ";
        }
    }
    cout << endl;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    printDuplicates(input);

    return 0;
}
