#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long r, x, d;
    int n;
    cin >> r >> x >> d >> n;

    string s;
    cin >> s;

    int ans = 0;
    for(char c: s){
        if(c == '1'){
            ans ++;
            r = max(0LL, r-d);
        }else if(c == '2'){
            if(r < x){
                ans++;
                r = max(0LL, r - d);
            }
        }
    }
    cout << ans << endl;
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