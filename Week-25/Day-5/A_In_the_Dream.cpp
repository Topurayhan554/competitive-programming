#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    int x1 = a;
    int y1 = b;
    
    int x2 = c - a;
    int y2 = d - b;
    
    if (x1 <= 2 * y1 + 2 && y1 <= 2 * x1 + 2 &&
        x2 <= 2 * y2 + 2 && y2 <= 2 * x2 + 2) {
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