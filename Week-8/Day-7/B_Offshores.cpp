#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    long long x, y;
    cin >> n >> x >> y;

    vector<long long> a(n);
    long long total_quotient = 0;
    
    for(int i=0;i<n;i++){
        cin >> a[i];
        total_quotient += (a[i] / x);
    }

    long long max_money = 0;
    for(int i=0;i<n;i++){
        long long current_q = a[i] / x;

        long long current_total = a[i] + (total_quotient - current_q) * y;

        if(current_total > max_money){
            max_money = current_total;
        }
    }

    cout << max_money << endl;

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