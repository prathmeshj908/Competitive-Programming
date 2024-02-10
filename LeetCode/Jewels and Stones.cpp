class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int>v;
        for(char x:jewels){
            v[x]++;
        }
        int ans=0;
        for(char x:stones){
            if(v[x]>0)
               ans++;
        }
        return ans;
    }
};
