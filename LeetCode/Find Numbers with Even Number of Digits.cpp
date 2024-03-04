class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int x:nums){
            string s=to_string(x);
            if(s.size()%2==0){
                ans+=1;
            }
        }
        return ans;
        // vector<int>v;
        // int ans=0;
        // for(int x:nums){
        //     if(x>10){
        //         while(x>=10){
        //             int n=x%10;
        //             v.push_back(n);
        //             x/=10;
        //             if(x<10)v.push_back(x);
        //         }
        //         if(v.size()%2==0)ans+=1;
        //         v.clear();
        //     }
        //     else{
        //         v.push_back(x);
        //         if(v.size()%2==0)ans+=1;
        //         v.clear();
        //     }

        // }
        // return ans;
    }
};