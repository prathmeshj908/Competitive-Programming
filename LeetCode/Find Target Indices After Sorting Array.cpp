class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> k;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
               k.push_back(i);
                     
        }
        if(k.empty())
           return k;
        return k;
    }
};