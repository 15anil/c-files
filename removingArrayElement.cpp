#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5}; // Initialize vector with some numbers

    // Display the original vector
    cout << "Original vector:" << endl;
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Remove a number (e.g., remove 3)
    int number_to_delete = 3;
    auto it = find(numbers.begin(), numbers.end(), number_to_delete);
    if (it != numbers.end()) {
        numbers.erase(it); // Erase the number if found
    }

    // Display the modified vector
    cout << "Vector after deleting " << number_to_delete << ":" << endl;
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
