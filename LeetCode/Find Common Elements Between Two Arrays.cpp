class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        map<int,int>mp1;
        for(int x:nums1){
            mp[x]++;
        }
        for(int x:nums2){
            mp1[x]++;
        }
        vector<int>ans(2,0);
        for(auto &x:nums1){
            if(mp1[x]>0){
                ans[0]++;
            }
        }
        for(auto &x:nums2){
            if(mp[x]>0){
                ans[1]++;
            }
        }
        return ans;
    }
};