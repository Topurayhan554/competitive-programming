#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int get_kth_mex(const vector<int>& a, int k) {
    int n = a.size();
    vector<int> f(n);
    vector<bool> present(n + 2, false);
    int current_mex = 0;
    
    for (int i = 0; i < n; ++i) {
        present[a[i]] = true;
        while (present[current_mex]) {
            current_mex++;
        }
        f[i] = current_mex;
    }
    
    sort(f.rbegin(), f.rend());
    return f[k - 1];
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int best_val = get_kth_mex(a, k);
    int best_i = -1, best_j = -1;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            swap(a[i], a[j]);
            int val = get_kth_mex(a, k);
            if (val > best_val) {
                best_val = val;
                best_i = i + 1;
                best_j = j + 1;
            }
            swap(a[i], a[j]);
        }
    }

    if (best_i == -1) {
        cout << -1 << "\n";
    } else {
        cout << best_i << " " << best_j << "\n";
    }
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
