#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<long long> w(n);
    for(int i=0;i<n;i++){
        cin >> w[i];
    }

    if(n%2 != 0){
        cout << "NO\n";
        return;
    }

    long long min_odd = 2e18;
    long long max_even = -2e18;

    for(int i=0;i<n;i++){
        if(i%2 == 0){
            min_odd = min(min_odd, w[i]);
        }else {
            max_even = max(max_even, w[i]);
        }
    }

    if(max_even + 1 < min_odd){
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
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