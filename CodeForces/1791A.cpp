#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    string s ="codeforces";
    char a;
    cin>>a;
    int cnt=0;
    for(char x = 0; x<s.size();x++){
        if(s[x] == a){
            cnt+=1;
        }
    }
    if(cnt >0 )cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
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