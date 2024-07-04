#include <iostream>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin>>n;
    if(n&(n-1))cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}