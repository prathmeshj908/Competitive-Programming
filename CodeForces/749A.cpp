#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    vector<int> primes;

    if (n % 2 == 0) {
        for (int i = 0; i < n / 2; i++) {
            primes.push_back(2);
        }
    } else {
        primes.push_back(3);
        for (int i = 0; i < (n - 3) / 2; i++) {
            primes.push_back(2);
        }
    }

    cout << primes.size() << endl;

    for (int prime : primes) {
        cout << prime << " ";
    }

    return 0;
}

