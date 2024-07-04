#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int ans = n;
    vector<int>v(n);
    for(int i =0;i<n;i++){
        cin>>v[i];
    }
    vector<int>a = v;
    sort(a.begin(),a.end());
    for(int i = 0;i<n;i++){
        if(v[i]!=a[1])cout<<i+1<<endl;
    }
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