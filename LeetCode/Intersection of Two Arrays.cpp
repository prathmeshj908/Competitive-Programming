class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>mp1(nums1.begin(),nums1.end());
        unordered_set<int>mp2(nums2.begin(),nums2.end());
        vector<int>v;
        for(auto x:mp1){
            if(mp2.count(x)){
                v.push_back(x);
            }
        }
        return v;
    }
};