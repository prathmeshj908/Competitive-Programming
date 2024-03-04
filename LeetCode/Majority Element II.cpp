class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        float n=nums.size()/3;
        unordered_map<int ,int>ump;
        for(int x:nums){
            ump[x]++;
        }
        vector<int>ans;
        for(auto &x:ump){
            if(x.second>n){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};