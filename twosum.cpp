class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int n = nums.size();
       for(int i=0;i<n-1;i++){
           int left = i;
           int right = i+1;
           while(right<n){
               if(nums[left] + nums[right] == target){
                   return {left,right};
               }
               right++;
           }
       }
       return {-1,-1};
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      map<int,int> mp;
      int n = nums.size();
      for(int i=0;i<n;i++){
          int a = nums[i];
          int required = target-a;
          if(mp.find(required)!= mp.end()){
              return {mp[required],i};
          }
          mp[a] = i;
      }
      return {-1,-1};
    }
};