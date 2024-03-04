class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>ump;
        for(char x:s){
            ump[x]++;
        }
        for(char x:t){
            if(--ump[x]<0) return x;
        }
        return 0;
    }
};