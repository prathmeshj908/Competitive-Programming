class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int i=0;
        int j=1;
        while(j <nums.size()){
            ans=max(abs(nums[i]-nums[j]),ans);
            i++;
            j++;
        }
        return ans;
    }
};