#include <iostream>
#include <cmath>
#include <unordered_set>
#define ll long long
using namespace std;

void solve(){
    ll n ;
    cin>>n;
    unordered_set<int>s;
    for(ll i = 1;i*i<=n;i++){
        s.insert(i*i);
    }
    for(ll i = 1;i*i*i<=n;i++){
        s.insert(i*i*i);
    }
    cout<<s.size()<<"\n";
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}