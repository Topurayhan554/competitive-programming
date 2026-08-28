#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin >> n;

    vector<pair<long long, int>> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i].first;
        a[i].second = i;
    }

    sort(a.begin(), a.end());

    vector<long long> pref(n+1, 0);

    for(int i=0;i<n;i++){
        pref[i+1] = pref[i] + a[i].first;

    }

    vector<long long> ans(n);

    for(int i=0;i<n;i++){
        long long val = a[i].first;
        long long left_count = i+1;
        long long right_count = n-1-i;

        long long left_sum = (left_count * val) - pref[i+1];

        long long right_sum= (pref[n] - pref[i+1]) - (right_count * val);

        ans[a[i].second] = n + left_sum + right_sum;

    }

    for(int i=0;i<n;i++){
        cout << ans[i] << (i==n-1? "": " ");
    }
    cout << endl;
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