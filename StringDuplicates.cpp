#include <iostream>

std::string removeDuplicates(const std::string& input) {
    std::string result;
    
    for (size_t i = 0; i < input.size(); ++i) {
        // Check if the current character is already in the result string
        bool duplicate = false;
        for (size_t j = 0; j < result.size(); ++j) {
            if (input[i] == result[j]) {
                duplicate = true;
                break;
            }
        }

        // If not a duplicate, add it to the result string
        if (!duplicate) {
            result += input[i];
        }
    }

    return result;
}

int main() {
    std::string input = "abacdb";
    std::string result = removeDuplicates(input);

    std::cout << "Original String: " << input << std::endl;
    std::cout << "String without Duplicates: " << result << std::endl;

    return 0;
}



