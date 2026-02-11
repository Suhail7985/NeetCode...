class Solution {
public:
    char findTheDifference(string s, string t) {
      char ans = 0;
      for(char r :s) ans^=r;
      for(char r :t) ans^=r;

      return ans;
    }
};