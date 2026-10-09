#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    vector<char> printed(n + 1, 0); 
    vector<int> st;
    
    for (int i = 0; i < n; i++) {
        int doc = i + 1;
        if (s[i] == '1') {
            st.push_back(doc);
        } else if (s[i] == '2') {
            if (!st.empty()) {
                printed[st.back()] = 1;
                st.pop_back();
            } else {
                printed[doc] = 1;
            }
        } else if (s[i] == '3') {
            printed[doc] = 1;
        }
    }
    
    vector<int> unprinted;
    for (int i = 1; i <= n; i++) {
        if (!printed[i]) {
            unprinted.push_back(i);
        }
    }
    
    cout << unprinted.size() << "\n";
    for (int i = 0; i < (int)unprinted.size(); i++) {
        cout << unprinted[i] << (i == (int)unprinted.size() - 1 ? "" : " ");
    }
    cout << "\n";
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