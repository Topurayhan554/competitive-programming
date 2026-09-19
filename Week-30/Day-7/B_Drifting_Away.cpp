#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    
    if (s.find("><") != string::npos ||
        s.find(">*") != string::npos ||
        s.find("*<") != string::npos ||
        s.find("**") != string::npos) {
        cout << -1 << "\n";
    } else {
        int l = 0;
        int r = 0;
        bool has_star = false;
        
        for (char c : s) {
            if (c == '<') {
                l++;
            } else if (c == '>') {
                r++;
            } else if (c == '*') {
                has_star = true;
            }
        }
        
        if (has_star) {
            cout << max(l + 1, r + 1) << "\n";
        } else {
            cout << max(l, r) << "\n";
        }
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