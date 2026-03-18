#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<bool> received(n, false);

    int current_pos = 0;
    received[current_pos] = true;

    for (int i = 0; i < n; ++i) {
        if (s[current_pos] == 'R') {
            current_pos++;
        } else {
            current_pos--;
        }
        if (current_pos >= 0 && current_pos < n) {
            received[current_pos] = true;
        }
    }

    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (received[i]) {
            count++;
        }
    }
    cout << count << endl;
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