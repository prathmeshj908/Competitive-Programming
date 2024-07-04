#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
void solve(){
    int a,b,c;
    vector<int>v;
    cin>>a >>b >>c;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(),v.end());
    cout<<v[1]<<"\n";
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