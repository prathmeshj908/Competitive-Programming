class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size()<=1) return false;
        unordered_map<int,int>ump;
        for(int x=0;x<nums.size();x++){
            ump[nums[x]]++;
        }
        for(auto x:ump){
            if(x.second>1)
               return true;
        }
        return false;
    }
};