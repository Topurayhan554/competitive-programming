#include <bits/stdc++.h>
using namespace std; 

void solve()
{
    int n, m;
    string a, b, c;

    
    cin >> n;
    cin >> a;
    cin >> m;
    cin >> b;
    cin >> c;
    for (int i = 0; i < m; ++i) {
        if (c[i] == 'V') {
            a = b[i] + a;
        } else {
            
            a = a + b[i];
        }
    }

    cout << a << endl;
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
    }
    return 0;
}