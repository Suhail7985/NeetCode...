class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
      if(k==1 || k==0){
        return 0;
      }
      int ans=INT_MAX;
      sort(nums.begin(),nums.end());
      for(int i = 0;i+k-1<nums.size();i++){
      if (nums.size() >= 2){
        ans = min(ans,nums[i+k-1] - nums[i]);
      }
      }
        return ans;
    }
};