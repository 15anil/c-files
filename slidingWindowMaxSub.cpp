#include<iostream>
#include<algorithm>
using namespace std;

int maxSumSubArray(int n, int a[], int k){
    int wsum = 0;
    int max_wsum = INT_MIN;
    for(int i = 0; i < k; i++){
        wsum += a[i];
    }
    for(int i = k; i < n; i++){
        wsum = wsum - a[i - k] + a[i];
        max_wsum = max(max_wsum, wsum);
    }
    return max_wsum;
}

int main(){
    int n;
    cout << "Enter the number of array elements: ";
    cin >> n;
    int *array = new int[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    int k;
    cout << "Enter the size of k: ";
    cin >> k;
    
    cout << "Max Sum of Subarray is: " << maxSumSubArray(n, array, k) << endl;
    
    delete[] array; // deallocate the dynamically allocated memory
    return 0;
}
