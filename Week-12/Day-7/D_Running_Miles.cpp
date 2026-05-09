#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin >> n;
    
    vector<int> b(n);
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    
    vector<int> left_max(n);
    left_max[0] = b[0] + 0;
    for (int i = 1; i < n; ++i) {
        left_max[i] = max(left_max[i - 1], b[i] + i);
    }
    
    vector<int> right_max(n);
    right_max[n - 1] = b[n - 1] - (n - 1);
    for (int i = n - 2; i >= 0; --i) {
        right_max[i] = max(right_max[i + 1], b[i] - i);
    }
    
    int max_ans = 0;
    
    for (int j = 1; j < n - 1; ++j) {
        int current_ans = left_max[j - 1] + b[j] + right_max[j + 1];
        max_ans = max(max_ans, current_ans);
    }
    
    cout << max_ans << "\n";
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