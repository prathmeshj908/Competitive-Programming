#include <iostream>
#include <vector>
using namespace std;

void solve(){
    string s,s1,s2;
    cin>>s;
    int n = s.size()/2;
    for(int i =0 ; i < n;i++){
        s1.push_back(s[i]);
    }
    for(int i = n; i<s.size();i++){
        s2.push_back(s[i]);
    }
    if(s1 == s2)cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
}

int main(){
    int t; 
    cin>>t;
    while(t--){
    solve();
    }
}