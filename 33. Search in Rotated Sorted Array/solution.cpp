//Brute Force Approach
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

//Optimal Approach
class Solution {
public:
    int search(vector<int>& nums, int target) {
      int low = 0 , high = nums.size() - 1;
      while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]==target) return mid;
        if(nums[low]<=nums[mid]){
          if(nums[low]<=target && target <= nums[mid]){
            high = mid-1;
          }
          else{
            low= mid + 1;
          }
        }
        else{
          if(nums[mid]<=target && target <= nums[high]){
            low = mid + 1;
          }
          else{
            high = mid - 1;
          }
        }
      }
      return -1; 
    }
};