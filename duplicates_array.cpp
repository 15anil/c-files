#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 2, 4, 5, 4, 6, 6, 7};

    sort(arr.begin(), arr.end());
    vector<int>::iterator last = unique(arr.begin(), arr.end());

    arr.erase(last, arr.end());

    for (size_t i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}
