#pragma GCC optimize("O3", "unroll-loops")
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
       int ans = 0;
       int i =0;
       int j =people.size() -1;
       sort(people.begin(),people.end());
       while(i<=j){
        if((people[i]+people[j]) <= limit){
            ans+=1;
            i+=1;
            j-=1;
        }
        else if((people[i]+people[j])>limit){
            ans+=1;
            j-=1;
        }
        
       }
       return ans;
    }
};
auto init = []() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
