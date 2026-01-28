class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
      sort(arr.begin(),arr.end());
      int mindiff= arr[1] - arr[0];
      for(int i=0;i<arr.size()-1;i++){
        int diff = arr[i+1] - arr[i];
        mindiff = min(mindiff,diff);
      }
          vector<vector<int> > soll;
      for(int i=0;i<arr.size()-1;i++){
        if(arr[i+1] - arr[i] == mindiff){
          soll.push_back({arr[i],arr[i+1]});
        }
      }
        return soll;
    }
};