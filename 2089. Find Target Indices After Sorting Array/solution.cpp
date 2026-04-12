// class Solution {
// public:
//     vector<int> targetIndices(vector<int>& nums, int target) {
//       sort(nums.begin(),nums.end());
//       vector<int>ans;
//       for(int i=0;i<nums.size();i++){
//         if(nums[i]==target){
//           ans.push_back(i);
//         }
//       }
//       return ans;
//     }
// };

//optimized
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
      vector<int>ans;
      int left=0,equal=0;
      for(int x:nums){
        if(x<target) left++;
        if(x==target) equal++;
      }
      for(int i=0;i<equal;i++){
        ans.push_back(left+i);
      }
      return ans;
    }
};