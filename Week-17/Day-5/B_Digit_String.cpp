#include <bits/stdc++.h>
using namespace std; 

void solve() {
    string s;
    cin >> s;
    int n = s.length();

    int total_13 = 0;
    for (char c : s) {
        if (c == '1' || c == '3') {
            total_13++;
        }
    }

    int max_len = total_13; 
    
    int count_2 = 0;
    int count_13_so_far = 0;

    for (char c : s) {
        if (c == '1' || c == '3') {
            count_13_so_far++;
        } else if (c == '2') {
            count_2++;
        }
        
        int current_13_left = total_13 - count_13_so_far;
        
        max_len = max(max_len, count_2 + current_13_left);
    }

    cout << n - max_len << "\n";
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