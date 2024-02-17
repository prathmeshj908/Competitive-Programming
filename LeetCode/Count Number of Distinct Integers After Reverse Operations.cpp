class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_map<int,int> ump;
        for(int x:nums){
            ump[x]++;
        }
        for(int x:nums){
            int a=0;
            while(x){
                a= a*10+ x%10;
                x=x/10;
            }
            ump[a]++;
        }
        return ump.size();
    }
};