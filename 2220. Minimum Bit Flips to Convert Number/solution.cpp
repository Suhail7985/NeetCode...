class Solution {
public:
    int minBitFlips(int start, int goal) {
      int cnt = 0;
      int ans = start^goal;
      while(ans){
       ans = ans & (ans-1);
        cnt++;
      }
      return cnt;
        
    }
};