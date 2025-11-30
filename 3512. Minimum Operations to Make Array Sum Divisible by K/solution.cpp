class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
      int total = accumulate(begin(nums), end(nums), 0, plus<int>());
      if(total % k==0){
        return 0;
      }
      else {
        return total % k;
      }
        return -1; 
    }
};