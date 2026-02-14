class Solution {
public:
    int longestBalanced(vector<int>& nums) {
      int longest = 0;
      for(int i=0;i<nums.size();i++){
        unordered_set<int> evenSet;
        unordered_set<int> oddSet;
for(int j = i;j<nums.size();j++){
          if(nums[j]%2==0){
            evenSet.insert(nums[j]);
          }
          else{
            oddSet.insert(nums[j]);
          }
          if(evenSet.size()==oddSet.size()){
            longest=max(longest,j-i+1);
          }
        }
      }
      return longest;
      
    }
};