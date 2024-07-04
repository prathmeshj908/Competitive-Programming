#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>v(26,0);
    for(char x=0;x<s.size();x++){
        v[s[x]-'a']++;
    }
    int ans = 0;
    for(int i =0;i<26;i++){
        if(v[i] >= 1){
            ans=max(ans,i);
        }
    }
    cout<<ans+1<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}