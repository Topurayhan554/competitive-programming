#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    
    int m = 2 * n;
    int red_score = 0;
    int blue_score = 0;
    
    for (int i = 0; i < m; ++i) {
        if (s[i] == '1') {
            int next_pos = (i + 1) % m;
            int final_pos = i;
            
            if (s[next_pos] == '0') {
                final_pos = next_pos;
            }
            

            if (final_pos % 2 == 1) {
                red_score++;
            } else {
                blue_score++;
            }
        }
    }
    
    cout << red_score << " " << blue_score << "\n";
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