#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    if (!(cin >> n)) return;
    string s;
    cin >> s;

    int open_count = 0;
    int close_count = 0;

    for (char c : s) {
        if (c == '(') {
            open_count++;
        } else {
            close_count++;
        }
    }

    if (open_count == close_count) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}