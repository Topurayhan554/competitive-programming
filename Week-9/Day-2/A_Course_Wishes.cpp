#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n, k;
    if (!(cin >> n >> k)) return;

    vector<int> a(k + 1);
    for (int i = 1; i <= k; ++i) {
        cin >> a[i];
    }

    vector<int> b(n);
    vector<int> counts(k + 2, 0);
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
        if (b[i] <= k) {
            counts[b[i]]++;
        }
    }

    vector<int> operations;
    
    while (true) {
        bool found = false;
        
       
        for (int L = k; L >= 1; --L) {
            for (int i = 0; i < n; ++i) {
                if (b[i] == L) {
                    int next_lvl = L + 1;
                    
                    if (next_lvl > k || counts[next_lvl] < a[next_lvl]) {
                        // Update state
                        counts[L]--;
                        b[i]++;
                        if (b[i] <= k) {
                            counts[b[i]]++;
                        }
                        
                        operations.push_back(i + 1);
                        found = true;
                        break; 
                    }
                }
            }
            if (found) break;
        }
        
        if (!found) break;
    }

    bool possible = true;
    for (int i = 0; i < n; ++i) {
        if (b[i] != k + 1) possible = false;
    }

    if (!possible) {
        cout << -1 << endl;
    } else {
        cout << operations.size() << endl;
        for (int i = 0; i < (int)operations.size(); ++i) {
            cout << operations[i] << (i == (int)operations.size() - 1 ? "" : " ");
        }
        cout << endl;
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