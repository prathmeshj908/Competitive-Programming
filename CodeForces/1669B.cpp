#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    unordered_map<int,int>ump;
    for(int x:v)ump[x]++;

    int cnt = 0;
    for(auto &x:ump){
        if(x.second >= 3){
           cnt=x.first;
           break;
        } 
    }
    if(cnt == 0) cout<<-1<<"\n";
    else cout<<cnt<<"\n";
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
