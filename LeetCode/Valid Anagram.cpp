class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>ump;
        for(char x:s){
            ump[x]++;
        }
        for(char x:t){
            ump[x]--;
        }
        for(auto &x:ump){
            if(x.second != 0)return false;
        }
        return true;
    }
};