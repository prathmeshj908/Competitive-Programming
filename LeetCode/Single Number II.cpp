class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int>CountMap;
        
        for(int i=0;i<nums.size();i++)
        {
            CountMap[nums[i]]++;
        }
        for(auto it=CountMap.begin();it != CountMap.end();it++)
        {
            if(it->second==1)
                return it->first;
        }
        return 0;
        
    }
};