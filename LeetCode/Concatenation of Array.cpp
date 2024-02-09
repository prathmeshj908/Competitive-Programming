class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
       vector<int>v(nums);
    //    for(int i=0;i<nums.size();i++){
    //        v.push_back(nums[i]);
    //    }
       for(int i=0;i<nums.size();i++)
       {
           v.insert(v.end(),nums[i]);
       }
    //    for(int i=0;i<nums.size();i++)
    //    {
    //        v.insert(v.end(),nums[i]);
    //    }
       return v; 
    }
};