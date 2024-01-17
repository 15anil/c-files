#include<iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r) {
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1];
    int b[n2];

    // Copy data to temporary arrays a[] and b[]
    for (int i = 0; i < n1; i++) {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++) {
        b[i] = arr[mid + 1 + i];
    }

    // Merge the two arrays back into arr[l..r]
    int i = 0;  // Initial index of first subarray
    int j = 0;  // Initial index of second subarray
    int k = l;  // Initial index of merged subarray

    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) {
            arr[k++] = a[i++];
        } else {
            arr[k++] = b[j++];
        }
    }

    // Copy the remaining elements of a[], if there are any
    while (i < n1) {
        arr[k++] = a[i++];
    }

    // Copy the remaining elements of b[], if there are any
    while (j < n2) {
        arr[k++] = b[j++];
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int mid = l + (r - l) / 2;

        // Sort first and second halves
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);

        // Merge the sorted halves
        merge(arr, l, mid, r);
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    mergeSort(arr, 0, n - 1);

    cout << "\nAfter sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
