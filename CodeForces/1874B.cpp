#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &x:v){
        cin>>x;
    }
    sort(v.begin(),v.end());
    // int a = v[0]+1;
    int ans = 1;
    for(int i = 1;i<n;i++){
        ans*=v[i];
    }
    cout<<ans*(v[0]+1)<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}