#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    string sorted_s = s;
    sort(sorted_s.begin(), sorted_s.end());

    if (s == sorted_s) {
        cout << "Bob" << endl;
        return;
    }

    int total_zeros = 0;
    for (char c : s) {
        if (c == '0') total_zeros++;
    }

    vector<int> indices;
    for (int i = 0; i < total_zeros; i++) {
        if (s[i] == '1') {
            indices.push_back(i + 1);
        }
    }

    for (int i = total_zeros; i < n; i++) {
        if (s[i] == '0') {
            indices.push_back(i + 1);
        }
    }

    cout << "Alice" << endl;
    cout << indices.size() << endl;
    for (int i = 0; i < indices.size(); i++) {
        cout << indices[i] << (i == indices.size() - 1 ? "" : " ");
    }
    cout << endl;
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