#include <iostream>
#include <vector> 
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &x:a) cin>>x;
    for(int i = 0; i<n;i++){
        a[i]--;
    }
    int ans = 3;
    for(int i = 0; i< n;i++){
    int p = a[i];
    int c = 1;
    while(p !=i){
        p=a[p];
        c+=1;
    }
    ans = min(c, ans);
    }
    cout<<ans<<endl;
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