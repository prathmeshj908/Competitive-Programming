class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
      unordered_map<int, int>ump;
      for(int x:target){
          ump[x]++;
      }
      for(int x:arr){
          ump[x]--;
      }
      for(auto &x:ump){
          if(x.second !=0)return false;
      } 
      return true; 
    }
};