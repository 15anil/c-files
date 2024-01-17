#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 2, 2, 3, 4, 5, 6, 7, 8, 8};
    std::sort(numbers.begin(), numbers.end());

    // Explicitly specifying the type of iterator returned by std::unique
    std::vector<int>::iterator last = std::unique(numbers.begin(), numbers.end());
    numbers.erase(last, numbers.end());

    std::cout << "After removing duplicates: " << std::endl;

    // Using a traditional for loop to print elements
    for (size_t i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << " ";
    }

    return 0;
}
