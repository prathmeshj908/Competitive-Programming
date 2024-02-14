class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        unordered_map<int,int>ump;
        for(int x:arr){
            ump[x]++;
        }
         unordered_set<int> seen;
        for (auto& pair : ump) {
            int count = pair.second;
            if (seen.count(count) > 0) {
                return false;
            }
            seen.insert(count);
        }
        
        return true;  
    }
};