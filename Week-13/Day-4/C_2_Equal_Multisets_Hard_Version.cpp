#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    vector<int> in_deg(n + 1, 0);
    vector<int> out_deg(n + 1, 0);
    vector<int> free_cls(n + 1, 0);

    for (int m = 0; m < k; m++) {
        bool can_id = true;
        bool can_uni = true;

        int x = a[m];
        int y = -1;

        for (int j = m; j < n; j += k) {
            if (b[j] != -1 && b[j] != a[j]) {
                can_id = false;
            }
            if (a[j] != x) {
                can_uni = false;
            }
            if (b[j] != -1) {
                if (y == -1) y = b[j];
                else if (y != b[j]) can_uni = false;
            }
        }

        if (!can_id && !can_uni) {
            cout << "NO\n";
            return;
        }

        if (!can_id) {
            in_deg[y]++;
            out_deg[x]++;
        } 
        else if (can_uni && y == -1) {
            free_cls[x]++;
        }
    }

    for (int v = 1; v <= n; v++) {
        int delta = in_deg[v] - out_deg[v];
        if (delta > 0) {
            if (free_cls[v] < delta) {
                cout << "NO\n";
                return;
            }
        }
    }

    cout << "YES\n";
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