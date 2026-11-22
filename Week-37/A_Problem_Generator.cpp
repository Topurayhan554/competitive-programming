#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    int n, m;
    string a;
    cin >> n >> m >> a;

    int freq[7] = {0};
    for (char c : a) {
        freq[c - 'A']++;
    }

    int needed = 0;
    for (int i = 0; i < 7; ++i) {
        needed += max(0, m - freq[i]);
    }

    cout << needed << '\n';
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
