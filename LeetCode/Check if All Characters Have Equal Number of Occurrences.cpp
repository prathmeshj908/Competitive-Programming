class Solution {
public:
    bool areOccurrencesEqual(string s) {
       unordered_map<char,int>ump;
       for(char x:s){
           ump[x]++;
       }
       int count = ump[s[0]];
       for(auto &x:ump){
           if(x.second!=count){
               return false;
           }
       }
       return true; 
    }
};