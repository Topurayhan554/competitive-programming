#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for(int i=0;i<n;i++){
        cin >> p[i];
    }

    if(n == 1){
        cout << 1 << endl;
        return;
    }

    for(int i=0;i<n;i++){
        cout << 2 << (i == n - 1 ? "" : " ");
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}