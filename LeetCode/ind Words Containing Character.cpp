class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>ans;
        for(int i=0;i<words.size();i++){
            if(words[i].find(x) !=string::npos){
                ans.push_back(i);
            }
        }
        return ans;
        // vector<int>ans;
        // for(int i=0;i<words.size();i++){
        //     string a=words[i];
        //     for(int j=0;j<a.size();j++){
        //         if(a[j]==x){
        //             ans.push_back(i);
        //             break;
        //         }
        //     }
        // }
        // return ans;
    }
};