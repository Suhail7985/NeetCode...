class Solution {
public:
    int majorityElement(vector<int>& nums) {
      
        map<int, int> freq; 
        for (int num : nums) {
            freq[num]++;  
            }
            int n = nums.size();
            for (auto p : freq) {
            if (p.second > n / 2) {  // check majority condition
            return p.first;
}
}
        return -1;
}
};