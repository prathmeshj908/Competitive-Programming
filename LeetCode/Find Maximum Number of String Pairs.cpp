class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_map<string,int>ump;
        int ans=0;
        for(string x:words){
            string s = x;
            reverse(s.begin(),s.end());
            if(ump.find(s) != ump.end()){
                ans+=1;
                ump.erase(s);
            }
            else{
                ump[x]++;
            }
        }
        return ans;
    }
};