class Solution {
public:
    int countBinarySubstrings(string s) {
      int prev=0,cur=1,count=0;
      for(int i = cur;i<s.size();i++){
        if(s[i]==s[i-1]){
          cur++;
        }
        else{
          count+=min(prev,cur);
          prev=cur;
          cur=1;
        }
      }
      count+=min(prev,cur);
      return count;
    }
};