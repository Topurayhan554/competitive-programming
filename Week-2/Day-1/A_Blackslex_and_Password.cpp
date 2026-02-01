#include <bits/stdc++.h>
using namespace std; 
void solve()
{
    int k, x;
    if (!(cin >> k >> x)) return;
    
    cout << (k * x) + 1 << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
    }
    return 0;
}