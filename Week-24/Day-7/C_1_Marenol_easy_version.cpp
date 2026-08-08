#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    int count0_a = 0;
    int count0_b = 0;
    
    string reduced_a = "";
    string reduced_b = "";
    
    for (char c : a) {
        if (c == '0') count0_a++;
        
        if (!reduced_a.empty() && reduced_a.back() == c) {
            reduced_a.pop_back();
        } else {
            reduced_a.push_back(c);
        }
    }

    for (char c : b) {
        if (c == '0') count0_b++;
        
        if (!reduced_b.empty() && reduced_b.back() == c) {
            reduced_b.pop_back();
        } else {
            reduced_b.push_back(c);
        }
    }

    if (count0_a == count0_b && reduced_a == reduced_b) {
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