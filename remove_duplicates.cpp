#include <iostream>
#include <vector>
#include <set>

void removeDuplicates(std::vector<int>& arr) {
    std::set<int> uniqueElements;
    std::vector<int> result;

    for (int element : arr) {
        // If the element is not in the set, add it to both the set and the result vector
        if (uniqueElements.find(element) == uniqueElements.end()) {
            uniqueElements.insert(element);
            result.push_back(element);
        }
    }

    // Copy the unique elements back to the original array
    arr = result;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 2, 4, 5, 6, 3, 7, 8, 1, 9, 10};

    std::cout << "Original Array: ";
    for (int element : arr) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Remove duplicates
    removeDuplicates(arr);

    std::cout << "Array after removing duplicates: ";
    for (int element : arr) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
