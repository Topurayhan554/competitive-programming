#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    for (int mask = 0; mask < (1 << n); mask++) {
        string p = "", x = "";
        vector<int> indices;
        
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                p += s[i];
                indices.push_back(i + 1);
            } else {
                x += s[i];
            }
        }

        bool p_ok = true;
        for (int i = 1; i < (int)p.length(); i++) {
            if (p[i] < p[i - 1]) {
                p_ok = false;
                break;
            }
        }

        bool x_ok = true;
        for (int i = 0; i < (int)x.length() / 2; i++) {
            if (x[i] != x[x.length() - 1 - i]) {
                x_ok = false;
                break;
            }
        }

        if (p_ok && x_ok) {
            cout << indices.size() << "\n";
            for (int i = 0; i < (int)indices.size(); i++) {
                cout << indices[i] << (i + 1 == (int)indices.size() ? "" : " ");
            }
            cout << "\n";
            return;
        }
    }
    
    cout << "-1\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}