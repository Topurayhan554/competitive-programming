#include <bits/stdc++.h>

using namespace std; 

void solve() {

    int n;

    cin >> n;

    vector<int> a(n);

    set<int> seen;

    bool has_duplicate = false;

    for (int i = 0; i < n; ++i) {

        cin >> a[i];



        if (seen.count(a[i])) {

            has_duplicate = true;

        }

        seen.insert(a[i]);

    }

    if (has_duplicate) {

        

        cout << -1 << endl;

    } else {

        

        sort(a.begin(), a.end(), greater<int>());

        

        for (int i = 0; i < n; ++i) {

            cout << a[i] << (i == n - 1 ? "" : " ");

        }

        cout << endl;

    }

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