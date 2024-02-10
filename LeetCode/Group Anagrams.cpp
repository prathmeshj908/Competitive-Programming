class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.empty())return {strs};
        if(strs.size()==1)return {strs}; 
        map<string,vector<string>> mp;
        for(string x:strs){
            string tmp= x;
            sort(tmp.begin(),tmp.end());
            mp[tmp].emplace_back(x);
        }
        vector<vector<string>> ans;
        for(auto r:mp){
            ans.emplace_back(r.second);
        }
        return ans;
    }
};