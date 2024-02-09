class Solution {
public:
    int subtractProductAndSum(int n) {
        vector<int>v;
        while(n>0){
            int k=n%10;
            v.push_back(k);
            n/=10;
        }
        int sum=0;
        int multiply=1;
        for(int i=0;i<v.size();i++){
            sum+=v[i];
        }
        for(int i=0;i<v.size();i++){
            multiply*=v[i];
        }
        return multiply-sum;   
    }
};