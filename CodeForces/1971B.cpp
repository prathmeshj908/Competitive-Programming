#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

void solve(){
    string s,s1;
    cin>>s;
    for(int i = 0; i<s.size()-1;i++){
        if(s[i] != s[i+1]){
            cout<<"YES"<<"\n";
            swap(s[i],s[i+1]);
            cout<<s<<"\n";
            return ;
        }
    }
    cout<<"NO"<<"\n";
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