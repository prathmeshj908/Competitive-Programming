#include <iostream> 
#include <climits>
#define ll long long
using namespace std;

void solve(){
    int n,m = 0,ans = 0;
    cin>>n;
    ll sum = 0;
    for(int i = 0; i<n;i++){
        int a;
        cin>>a;
        m = max(m,a);
        sum += a;
        if(sum == 2*m)ans+=1;
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