#include <iostream>
#include <cstring> // For strlen

bool isPalindrome(const char *str) {
    const char *start = str;
    const char *end = str + strlen(str) - 1;
    while (start < end) {
        if (*start != *end) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    // Convert input string to C-style string (const char*)
    const char *cstr = input.c_str();

    if (isPalindrome(cstr)) {
        std::cout << "The string \"" << input << "\" is a palindrome." << std::endl;
    } else {
        std::cout << "The string \"" << input << "\" is not a palindrome." << std::endl;
    }

    return 0;
}
