#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
void solve(){
    string s,ans;
    cin>>s;
    ans.push_back(s[0]);
    for(int i =1; i<s.size();i++){
        if(i%2 != 0)ans.push_back(s[i]);
    }
    cout<<ans<<"\n";
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}