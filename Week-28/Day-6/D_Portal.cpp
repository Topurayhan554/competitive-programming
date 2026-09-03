#include <bits/stdc++.h>
using namespace std;

int min_rotation(const vector<int>& s) {
    int n = s.size();
    if (n <= 1) return 0;
    int i = 0, j = 1, k = 0;
    while (i < n && j < n && k < n) {
        int a = s[(i + k) % n];
        int b = s[(j + k) % n];
        if (a == b) {
            k++;
        } else {
            if (a > b) {
                i = i + k + 1;
            } else {
                j = j + k + 1;
            }
            if (i == j) i++;
            k = 0;
        }
    }
    return min(i, j);
}

void solve() {
    int n, x, y;
    if (!(cin >> n >> x >> y)) return;
    
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    vector<int> B;
    for (int i = x; i < y; i++) {
        B.push_back(p[i]);
    }

    vector<int> S;
    for (int i = 0; i < x; i++) {
        S.push_back(p[i]);
    }
    for (int i = y; i < n; i++) {
        S.push_back(p[i]);
    }

    int rot = min_rotation(B);
    int L = B.size();
    vector<int> B_star(L);
    for (int i = 0; i < L; i++) {
        B_star[i] = B[(rot + i) % L];
    }

    int b0 = B_star[0];
    int k_first = S.size();
    for (int i = 0; i < (int)S.size(); i++) {
        if (S[i] > b0) {
            k_first = i;
            break;
        }
    }

    vector<int> ans;
    ans.reserve(n);
    for (int i = 0; i < k_first; i++) {
        ans.push_back(S[i]);
    }
    for (int x_val : B_star) {
        ans.push_back(x_val);
    }
    for (int i = k_first; i < (int)S.size(); i++) {
        ans.push_back(S[i]);
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << (i == n - 1 ? "" : " ");
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