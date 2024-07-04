#include <iostream>
#include <vector>
using namespace std;

void solve(){
    vector<int>v(4);
    int ans= 0;
    for(int i = 0; i<4;i++){
        cin>>v[i];
    }
    for(int i = 1;i<4;i++){
        if(v[0]<v[i]) ans+=1;
    }
    cout<<ans<<"\n";
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