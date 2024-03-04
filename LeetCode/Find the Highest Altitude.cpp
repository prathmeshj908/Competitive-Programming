class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=0;
        int ans=0;
        for(int x:gain){
            n+=x;
            ans=max(n,ans);
        }
        return ans;
        // vector<int>v;
        // int sum=0;
        // for(int x:gain){
        //     v.push_back(sum);
        //     sum+=x;
        // }
        // int ans=0;
        // for(int i=0;i<v.size();i++){
        //     if(v[i]>ans){
        //         ans=v[i];
        //     }
        // }
        // return ans;
    }
};