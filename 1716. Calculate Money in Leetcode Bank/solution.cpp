class Solution {
public:
    int totalMoney(int n) {
      int weeks=n/7;
      int days = n%7;
      int total = 0;
      for(int i = 0;i<weeks;i++){
        total += 7*(i+1)+21;
      }
      for(int i=0;i<days;i++){
        total += (weeks + 1) + i;
      }
      return total;
        
    }
};