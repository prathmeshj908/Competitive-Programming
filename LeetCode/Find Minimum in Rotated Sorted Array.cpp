class Solution {
public:
    int findMin(vector<int>& nums) {
    //     sort(nums.begin(),nums.end());
    //     int ans=nums[0];
    // return ans;
     int l=0;
     int r=nums.size()-1;
     while(l<r){
         int mid=(l+r)/2;
         if(nums[mid]<nums[r]){
             r=mid;
         }
         else
             l=mid+1;
     }
    return nums[l];   
    }
};