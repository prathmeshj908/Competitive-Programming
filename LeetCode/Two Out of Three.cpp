class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_set<int> s(nums1.begin(),nums1.end());
        unordered_set<int> s1(nums2.begin(),nums2.end());
        unordered_set<int> s2(nums3.begin(),nums3.end());
        unordered_map<int,int>ump;
        for(int x:s){
            ump[x]++;
        }
        for(int x:s1){
            ump[x]++;
        }
        for(int x:s2){
            ump[x]++;
        }
        vector<int>v;
        for(auto &x:ump){
            if(x.second>=2){
                v.push_back(x.first);
            }
        }
        return v;
    }
};