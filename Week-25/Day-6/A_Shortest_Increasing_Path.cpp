#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long x, y;
    cin >> x >> y;

    if(x < y){
        cout << 2 << endl;
    }else if(x >= y + 2 && y >= 2){
        cout << 3 << endl;
    }else{
        cout << -1 << endl;
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