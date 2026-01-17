#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k, m;
        cin >> n >> k >> m;
        string s;
        cin >> s;

        vector<int> cnt(k, 0);
        int full = 0;
        vector<char> missing;

        for (char c : s) {
            cnt[c - 'a']++;
            bool ok = true;
            for (int i = 0; i < k; i++) {
                if (cnt[i] == 0) {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                full++;
                for (int i = 0; i < k; i++) {
                    cnt[i]--;
                }
            }
        }

        if (full >= n) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
            
            char ch = 'a';
            for (int i = 0; i < k; i++) {
                if (cnt[i] == 0) {
                    ch = char('a' + i);
                    break;
                }
            }
            for (int i = 0; i < n; i++){
                cout << ch;
            };
            cout << "\n";
        }
    }
    return 0;
}
