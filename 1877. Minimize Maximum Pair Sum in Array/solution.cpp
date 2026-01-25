class Solution {
public:
    int minPairSum(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int start = 0, end = nums.size() - 1;
      int maxpair=0;
      while(start<end){
        int pairsum = nums[start] + nums[end];
        maxpair = max(maxpair, pairsum);
        start++;
        end--;
      }
        return maxpair;
    }
};