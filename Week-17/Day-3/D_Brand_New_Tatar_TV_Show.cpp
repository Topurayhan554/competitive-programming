#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> c(n + 1, 0);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        c[x]++;
    }

    vector<bool> validTarget(n + k + 2, false);
    vector<bool> goodTarget(n + 1, false);
    
    int active_valid_targets = 0;
    bool arseniy_can_win = false;

    for (int x = n; x >= 1; x--) {
        if (x + 1 <= n + k + 1) {
            if (validTarget[x + 1]) active_valid_targets++;
        }
        if (x + k + 1 <= n + k + 1) {
            if (validTarget[x + k + 1]) active_valid_targets--;
        }

        bool nextWin = (active_valid_targets > 0);

        if (c[x] > 0) {
            if (nextWin) {
                goodTarget[x] = false;
            } else {
                goodTarget[x] = (c[x] % 2 != 0);
            }
            
            validTarget[x] = goodTarget[x];

            if (!goodTarget[x]) {
                arseniy_can_win = true;
            }
        } else {
            goodTarget[x] = false;
            validTarget[x] = false;
        }
    }

    if (arseniy_can_win) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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