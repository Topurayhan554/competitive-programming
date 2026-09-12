#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int count_A = 0, count_B = 0, count_C = 0, count_D = 0;

    for (char c : s) {
        if (c == 'A') count_A++;
        else if (c == 'B') count_B++;
        else if (c == 'C') count_C++;
        else if (c == 'D') count_D++;
    }

    int max_score = 0;
    max_score += min(n, count_A);
    max_score += min(n, count_B);
    max_score += min(n, count_C);
    max_score += min(n, count_D);

    cout << max_score << "\n";
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
