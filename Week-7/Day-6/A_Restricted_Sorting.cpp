#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<long long>a(n);
    long long min_val = 2e9;
    long long max_val = -2e9;

    for(int i=0;i<n;i++){
        cin >> a[i];

        if(a[i] < min_val) min_val = a[i];
        if(a[i] > max_val) max_val = a[i];
    }


    vector<long long> sorted_a = a;
    sort(sorted_a.begin(), sorted_a.end());

    if(a == sorted_a){
        cout << -1 << endl;
        return;
    }

    long long ans = 2e18;
    for(int i=0;i<n;i++){
        if(a[i] != sorted_a[i]){
            long long cur_max_k = max(a[i] - min_val, max_val - a[i]);
            ans = min(ans, cur_max_k);
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