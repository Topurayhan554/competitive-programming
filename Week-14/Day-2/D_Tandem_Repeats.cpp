#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.length();

    for (int d = n / 2; d >= 1; d--) {
        int consecutive_match = 0;

        for (int i = 0; i < n - d; i++) {
            if (s[i] == s[i + d] || s[i] == '?' || s[i + d] == '?') {
                consecutive_match++;
            } else {
                consecutive_match = 0;
            }

            if (consecutive_match == d) {
                cout << 2 * d << "\n";
                return;
            }
        }
    }

    cout << 0 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}