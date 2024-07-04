#include <iostream>
#include <string>
using namespace std;

void solve(string s) {
    int x = 0, y = 0;
    string result;
    for (char c : s) {
        if (c == '(') {
            x++;
            result += '(';
        } else {
            if (x > y) {
                result += ')';
                y++;
            }
        }
    }
    while (x > y) {
        result += ')';
        y++;
    }
    cout << result << endl;
}

int main() {
    string s;
    cin >> s;
    solve(s);
    return 0;
}

