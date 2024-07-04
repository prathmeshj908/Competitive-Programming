#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

void solve() {
    vector<int> v(4);
    for (int i = 0; i < v.size(); i++)
        cin >> v[i];
    int m1 = max(v[0],v[1]);
    int m2 = max(v[2],v[3]);
    sort(v.begin(),v.end());

    if((m1 == v[2] || m1 == v[3]) && (m2 == v[2] || m2 == v[3]))cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
