class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        
        for(int i=0;i<nums1.size();i++){
            int max= -1;
            for(int j=0;j<nums2.size();j++){
                int index=j;
                if(nums1[i]==nums2[j]){
…            ans.push_back(max);
            
        }
        return ans;

        
    }
};