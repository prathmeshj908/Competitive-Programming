#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void solve(){
    string s,s1;
    cin>>s;
    s1 = "codeforces";
    int i = 0, ans = 0;
    while(i < s.size()){
        if(s[i] != s1[i]){
            ans+=1;
            i+=1;
        }
        else i+=1;
    }
    cout<<ans<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}