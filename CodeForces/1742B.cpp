#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i = 0; i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll cnt = 0;
    for(ll i = 0; i<n-1;i++){
        if(v[i] < v[i+1])cnt+=1;
        
    }
    if(cnt == v.size()-1)cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}