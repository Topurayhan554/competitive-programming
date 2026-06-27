#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s, t;
    cin >> s >> t;

    vector<int> cnt_s(26, 0), cnt_t(26, 0);
    for (char c : s) cnt_s[c - 'a']++;
    for (char c : t) cnt_t[c - 'a']++;

    for (int i = 0; i < 26; i++) {
        if (cnt_s[i] > cnt_t[i]) {
            cout << "Impossible\n";
            return;
        }
    }

    string rem = "";
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < cnt_t[i] - cnt_s[i]; j++) {
            rem += (char)('a' + i);
        }
    }

    int n = s.length();
    vector<int> nxt(n, n);
    for (int i = n - 2; i >= 0; i--) {
        if (s[i] != s[i + 1]) {
            nxt[i] = i + 1;
        } else {
            nxt[i] = nxt[i + 1];
        }
    }

    string ans = "";
    int i = 0, j = 0;
    int m = rem.length();

    while (i < n && j < m) {
        if (rem[j] < s[i]) {
            ans += rem[j++];
        } else if (rem[j] > s[i]) {
            ans += s[i++];
        } else {
            int k = nxt[i];
            if (k < n && s[k] < s[i]) {
                ans += s[i++];
            } else {
                ans += rem[j++];
            }
        }
    }

    while (i < n) ans += s[i++];
    while (j < m) ans += rem[j++];

    cout << ans << "\n";
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