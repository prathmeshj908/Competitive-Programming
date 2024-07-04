#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;
void solve(){
    int n;
    ll k;
    std::cin >> n >> k;
    
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::sort(a.begin(), a.end());
    
    ll max = a[0];
    ll oldk = k;
    for (int i = 1; i < n; i++) {
        if (i * (a[i] - a[i - 1]) <= k) {
            max = a[i];
            k -= i * (a[i] - a[i - 1]);
        } else {
            max += k / i;
            k %= i;
            break;
        }
    }
    ll ans = max * n + k;
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            ans++;
        }
    }
    ans =std:: max(0LL, ans - n + 1);
    cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
