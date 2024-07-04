#include <iostream>
#include <vector>

using namespace std;

bool canDistributeCoins(int a, int b, int c, int n) {
    int totalCoins = a + b + c + n;
    if (totalCoins % 3 != 0) {
        return false;
    }
    int targetCoins = totalCoins / 3;
    return a <= targetCoins && b <= targetCoins && c <= targetCoins;
}

int main() {
    int t;
    cin >> t;
    vector<string> results(t);
    
    for (int i = 0; i < t; ++i) {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        if (canDistributeCoins(a, b, c, n)) {
            results[i] = "YES";
        } else {
            results[i] = "NO";
        }
    }
    
    for (const string& result : results) {
        cout << result << endl;
    }
    
    return 0;
}
