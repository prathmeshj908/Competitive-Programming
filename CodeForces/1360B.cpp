#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0; i<n;i++){
        cin>>v[i];
    }
    // int cnt = 0;
    int ans = INT32_MAX;
    int x = v.size();
    sort(v.begin(),v.end());
    for(int i = 0 ; i<n-1;i++){
        ans = min(ans,v[i+1] - v[i]);   
    }
    cout<<ans<<"\n";
    

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}