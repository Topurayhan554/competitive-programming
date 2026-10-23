#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    string s, t;
    cin >> s >> t;
    
    int l = 0;
    while (l < s.length() && l < t.length() && s[l] == t[l]) {
        l++;
    }
    
    int ans = s.length() + t.length();
    if (l > 0) {
        ans = s.length() + t.length() - l + 1;
    }
    
    cout << ans << "\n";
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int q;
    cin >> q;
    while (q--) {
        solve();
    }
    
    return 0;
}
