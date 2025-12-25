class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
      int total = 0;
      for(int a : apple){
        total+=a;
      }
      sort(capacity.begin(),capacity.end(), greater<int>());
      int count=0;
      for(int c : capacity){
        total-=c;
        count++;
        if(total<=0){
          break;
        }
      }
      return count;
    }
};