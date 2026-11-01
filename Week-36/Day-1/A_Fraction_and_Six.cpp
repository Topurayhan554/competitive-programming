#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string p, q;
        cin >> p >> q;

        vector<int> cnt(26, 0);

        for (char c : p) cnt[c - 'a']++;
        for (char c : q) cnt[c - 'a']--;

        bool ok = true;

        for (int i = 0; i < 26; i++) {
            char c = char('a' + i);

            int need = 0;
            if (c == 's' || c == 'i' || c == 'x') need = 1;

            if (cnt[i] != need) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}