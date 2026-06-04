#include <bits/stdc++.h>
using namespace std; 

void solve() {
    long long X;
    cin >> X;
    
    int k = 0;
    while ((1LL << (k + 1)) <= X) {
        k++;
    }
    
    vector<int> base;
    for (int j = 1; j <= k; j++) {
        base.push_back(2 * j);
    }
    
    long long rem = X - (1LL << k);
    vector<int> extra;
    for (int i = 0; i < k; i++) {
        if ((rem >> i) & 1) {
            extra.push_back(2 * i + 1);
        }
    }
    
    sort(extra.rbegin(), extra.rend());
    
    vector<int> ans = base;
    ans.insert(ans.end(), extra.begin(), extra.end());
    
    cout << ans.size() << "\n";
    for (size_t i = 0; i < ans.size(); i++) {
        cout << ans[i] << (i + 1 == ans.size() ? "" : " ");
    }
    cout << "\n";
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