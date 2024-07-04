#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0; i<n ; i++){
        cin>>v[i];
    }
    for(int x = 0; x<n;x++){
        if(v[x]%2 == 0) v[x]+1;
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