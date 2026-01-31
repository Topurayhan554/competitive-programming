#include <bits/stdc++.h>
using namespace std; 

void solve()
{
    int n;
    if (!(cin >> n)) return;
    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    vector<int> max_idx(n);
    
    max_idx[n - 1] = n - 1;
    
    for (int i = n - 2; i >= 0; --i) {
        if (p[i] > p[max_idx[i + 1]]) {
            max_idx[i] = i;
        } else {
            max_idx[i] = max_idx[i + 1];
        }
    }

    for (int i = 0; i < n; ++i) {
        int best_suffix_idx = max_idx[i];
                if (p[i] != p[best_suffix_idx]) {
            reverse(p.begin() + i, p.begin() + best_suffix_idx + 1);
            break;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << p[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}