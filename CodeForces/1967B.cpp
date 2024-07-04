#include <iostream>
using namespace std;
#define ll long long
void solve() {
    int n, m;
    cin >> n >> m;
    ll ans = 0;
    for (int b = 1; b <= m; b++) {
        ans += (n + b) / b / b;
    }
    ans--;
    cout << ans << "\n";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}