#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> p[i];
        }

        vector<int> pos;
        for (int i = 1; i <= n; i++) {
            if (p[i] != i) {
                pos.push_back(i);
            }
        }

        bool ok = true;
        int m = (int)pos.size();

        for (int i = 0; i < m; i++) {
            if (p[pos[i]] != pos[m - 1 - i]) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}