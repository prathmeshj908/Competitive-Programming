class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string l, r;
        for(auto &x:word1){
            l+=x;
        }
        for(auto &x:word2){
            r+=x;
        }
        return l == r;
        // for(auto &x:word2){
        //     word1.push_back(x);
        // }
        // int l=0;
        // int r=word1.size()-1;
        // while(l<r){
        //     if(word1[l]==word1[r]){
        //         l++;
        //         r--;
        //         return true;
        //     }
        // }
        // return false;       
    }
};