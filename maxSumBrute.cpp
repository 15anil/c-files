#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int maxSubarray(vector<int>& nums) {
    int n = nums.size();
    int max_sum = INT_MIN, curr_sum = 0;
    for(int i = 0; i < n; i++) {
        if(curr_sum < 0) {
            curr_sum = nums[i];
        } else {
            curr_sum += nums[i]; // Changed arr[i] to nums[i]
        }
        max_sum = max(max_sum, curr_sum);
    }
    return max_sum;
}

int main() {
   int n;
   cout<<"enter the user elements: "<<endl;
   cin>>n;
   vector<int> arr;
   for(int i=0;i<n;i++){
    int num;
    cin>>num;
    arr.push_back(num);
   }
   int max_sum = maxSubarray(arr);
   cout<<"maximum sub array is: "<<max_sum<<endl;
   return 0;
}
