#include <bits/stdc++.h>
using namespace std;

void solve(){
    vector<long long> arr(3);
    cin >> arr[0] >> arr[1] >> arr[2];

    sort(arr.begin(), arr.end());

    long long min_range = min(arr[2] - arr[0], arr[1]);

    cout << min_range << endl;
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