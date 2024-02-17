class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
       vector<int>ans;
       for(int x:nums){
           if(x>=10){
               while(x>=10){
               int n=x%10;
               ans.push_back(n);
               x/=10;
               if(x<10) ans.push_back(x);
               }
           }
           else
              ans.push_back(x);
       }
       int s=0;
       for(int x:nums){
           s+=x;
       }
       int s1=0;
       for(int x:ans){
           s1+=x;
       } 
       return abs(s-s1);
    }
};