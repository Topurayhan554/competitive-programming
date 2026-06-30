#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll MOD = 998244353;
const ll EXP_MOD = 998244352;

ll power(ll base, ll exp)
{
    ll res = 1;
    base %= MOD;
    while (exp > 0)
    {
        if (exp % 2 == 1)
            res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

void solve()
{
    ll n, m, r, c;
    cin >> n >> m >> r >> c;

    ll total_vars = n * m;
    ll total_eqs = (n - r + 1) * (m - c + 1);

    ll k = total_vars - total_eqs;

    k %= EXP_MOD;

    cout << power(2, k) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t)
    {
        while (t--)
        {
            solve();
        }
    }

    return 0;
}