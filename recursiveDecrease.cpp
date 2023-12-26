#include<iostream>
using namespace std;

void decreasing(int n) {
    // Base case: stop recursion when n becomes 0
    if (n == 0) {
        return;
    }

    // Print the current value of n
    cout << n << endl;

    // Recursive call with n-1
    decreasing(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Call the function to print decreasing numbers
    decreasing(n);

    return 0;
}
