#include <bits/stdc++.h>
using namespace std; 
void solve()
{
    int n;
    cin >> n;

    vector<int> p(n);
    int l = 1;
    int r = n;
    
    for (int i = n - 1; i >= 0; i--)
    {
        if ((n - 1 - i) % 2 == 0) {
            p[i] = l;
            l++;
        }
        else {
            p[i] = r;
            r--;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << p[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}