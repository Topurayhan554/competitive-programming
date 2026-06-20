#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    vector<long long> sorted_a = a;
    sort(sorted_a.begin(), sorted_a.end());
    
    bool possible = true;
    for (int i = 0; i < n; i++) {
        if (sorted_a[i] > b[i]) {
            possible = false;
            break;
        }
    }
    
    if (!possible) {
        cout << -1 << "\n";
        return;
    }

    vector<int> L(n);
    for (int i = 0; i < n; i++) {
        auto it = lower_bound(b.begin(), b.end(), a[i]);
        L[i] = distance(b.begin(), it) + 1;
    }

    vector<bool> used(n, false);
    long long inversions = 0;

    for (int j = 1; j <= n; j++) {
        int skipped = 0;
        int chosen = -1;
        
        for (int i = 0; i < n; i++) {
            if (!used[i]) {
                if (L[i] <= j) {
                    chosen = i;
                    break;
                }
                skipped++;
            }
        }
        
        used[chosen] = true;
        inversions += skipped;
    }

    cout << inversions << "\n";
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