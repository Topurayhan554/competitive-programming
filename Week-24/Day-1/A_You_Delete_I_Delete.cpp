#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    
    string best_res = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '0') {
            string t = s.substr(0, i) + s.substr(i + 1);
            
            int pos = t.find('1');
            if (pos != string::npos) {
                string res = t.substr(0, pos) + t.substr(pos + 1);
                
                if (best_res == "" || res > best_res) {
                    best_res = res;
                }
            }
        }
    }
    
    cout << best_res << "\n";
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