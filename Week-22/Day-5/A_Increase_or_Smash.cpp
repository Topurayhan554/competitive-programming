#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    set<int> unique_elements;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        unique_elements.insert(val);
    }
    
    long long k = unique_elements.size();
    cout << (2 * k - 1) << "\n";
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