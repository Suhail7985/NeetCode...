class Solution {
public:
    int maxProduct(vector<int>& nums) {
      int maxi=nums[0],res=nums[0];
      int neg=nums[0];
      for(int i=1;i<nums.size();i++){
        if(nums[i]<0) swap(maxi,neg);
        maxi=max(nums[i],nums[i]*maxi);
        neg=min(nums[i],nums[i]*neg);

        res=max(res,maxi);
      }
      return res;
    }
};