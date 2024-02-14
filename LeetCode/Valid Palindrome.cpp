class Solution {
public:
    bool isPalindrome(string s) {
        vector<int>v;
        for(char x:s){
            int ascii = tolower(x);
            if(isalnum(ascii)) { 
                v.push_back(ascii);
            }
        }
        int l=0;
        int r=v.size()-1;
        while(l<=r)
        {
            if(v[l]==v[r]){
               l++;
               r--;
            }
            else
                return false;
        }
        return true;
    }
};