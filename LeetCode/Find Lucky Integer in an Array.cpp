class Solution {
public:
    int findLucky(vector<int>& arr) {
    map<int,int>mp;
    for(int x:arr){
         mp[x]++;
    }
    int ans=0;
    for(auto &x:mp){
        if(x.second==x.first){
            ans=max(x.first,ans);
        }
    }
    if(ans==0) return -1;
    return ans;   
    }
};