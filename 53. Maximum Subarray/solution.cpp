class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int maxi = nums[0];
      int res = nums[0];
      for (int i = 1; i<nums.size();i++){
          maxi=max(nums[i],nums[i]+maxi);
          res = max(maxi,res);  
      }
        return res;
    }
};