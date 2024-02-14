class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>v;
        vector<int>v1;
        vector<int>ans;
        for(int x:nums){
            if(x%2==0){
                v.push_back(x);
            }
            else{
                v1.push_back(x);
            }
        }
        for(int i=0;i<v.size();i++){
            ans.push_back(v[i]);
            ans.push_back(v1[i]);
        }
        return ans;
    }
};