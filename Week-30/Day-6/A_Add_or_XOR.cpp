#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){

    ll a, b, x, y;
    cin >> a >> b >> x >> y;

    if(a == b){
        cout << 0 << "\n";
        return;
    }

    if(a > b){
        if(a % 2 != 0 && b == a - 1){
            cout << y << endl;
        }else {
            cout << -1 << endl;
        }
        return;
    }

    ll total_cost = 0;
    for(ll k = a; k<b; k++){
        if(k%2 == 0){
            total_cost += min(x, y);
        }else{
            total_cost += x;
        }
    }

    cout << total_cost << endl;

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