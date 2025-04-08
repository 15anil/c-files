#include <iostream>
#include <vector>
#include <set>

int main() {
    // Take the number of elements as input
    int size;
    std::cout << "Enter the number of elements: ";
    std::cin >> size;

    // Take input using vector
    std::vector<int> inputVector(size);

    std::cout << "Enter " << size << " elements for the vector:\n";
    for (int i = 0; i < size; ++i) {
        std::cin >> inputVector[i];
    }

    // Remove duplicates by passing the vector to a set
    std::set<int> uniqueSet(inputVector.begin(), inputVector.end());

    // Display the elements in the set (without duplicates)
    std::cout << "Elements in the vector after removing duplicates:\n";
    for (int value : uniqueSet) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}
