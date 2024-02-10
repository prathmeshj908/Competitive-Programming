class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        unordered_map<int, int> umap;
        int sum = 0;

        for(int i = 0; i < nums.size(); i++)
            umap[nums[i]]++;

        for(int i = 0; i < nums.size(); i++)
        {
            sum = 0;
            for(auto it = umap.begin(); it != umap.end(); it++)
            {
                if(nums[i] > it->first)
                    sum = sum + it->second;
            }

            nums[i] = sum;
        }
        return nums;  
    }
};