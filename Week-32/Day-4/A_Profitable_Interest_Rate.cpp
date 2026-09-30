#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll a, b;
    cin >> a >> b;
    
    if(a >= b){
        cout << a << endl;

    }else{
        ll x = b - a;
        ll remaining = a - x;

        if(remaining < 0){
            cout << 0 << endl;
        }else{
            cout << remaining << endl;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}