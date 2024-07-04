#include <iostream>
#include <string.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    cin>>s;
    ll cnt = 0;
    ll ans = 0;
    for(int i = 0; i<s.size();i++){
        if(s[i] == '1') cnt+=1;
        else {
            if(cnt>0){
                ans+=cnt+1;
            }
        }
    }
    cout<<ans<<"\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
 
    int T = 1;
    cin >> T;
    while(T--) {
        solve();
    }
 
	return 0;
}
 