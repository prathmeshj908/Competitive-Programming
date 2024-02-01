class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        for(int j=n-1;j>=0;j--)
        {
            if(digits[j]<9)
            {
                digits[j]++;
                return digits;
            }
            digits[j]=0;
        }
        vector<int> result;
        result.push_back(1);

        for(int i=0;i<n;i++)
        {
            result.push_back(digits[i]);
        }
        return result;
    }

};