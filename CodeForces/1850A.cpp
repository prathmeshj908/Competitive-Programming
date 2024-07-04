#include <iostream>
#include <string>
#include <vector>
#include <string.h>
#include<algorithm>
using namespace std;

void solve(){
    int a,b,c;
    cin>>a >>b >>c;
    vector<int>v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(),v.end());
    if(v[2]+v[1] >=10)cout<<"YES"<<"\n";
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