class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0;
        int r=numbers.size()-1;
        while(l<r){
            if(numbers[l]+numbers[r]==target)
               return {l+1,r+1};
            else if((numbers[l]+numbers[r])<target)
                    l++;
            else
               r--;
        }
        return {};
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int, int> n;
        vector<int> v(2);
        for(int i=0;i<numbers.size();i++)
        {
            if(n.find(target - numbers[i]) != n.end()){
               v[0]=n[target - numbers[i]]+1;
               v[1]=i+1;
               return v;
            }
            n[numbers[i]]=i;
        }
        assert(false);
        return v;
    }
};