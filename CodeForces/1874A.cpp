#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void solve(){
    string s1;
    cin>>s1;
    if('a' == s1[0] || 'b' == s1[1] || 'c' == s1[2])cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}