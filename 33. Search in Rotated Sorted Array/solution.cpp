class Solution {
public:
    int search(vector<int>& nums, int target) {
      int first = -1;
      for(int i =0; i<nums.size();i++){
        if(nums[i]==target){
          if(first == -1){
            first = i;
          }
        }
      }
       return first; 
    }
};