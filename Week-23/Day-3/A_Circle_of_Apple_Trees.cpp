#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    set<int> unique_beauties;
    for (int i = 0; i < n; ++i) {
        int b;
        cin >> b;
        unique_beauties.insert(b);
    }
    
    cout << unique_beauties.size() << "\n";
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