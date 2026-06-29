#include <bits/stdc++.h>
using namespace std; 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;

        long long total_popCount = 0;
        long long cost = 1;

        while(cost <= n){
            long long buy = min(k, n / cost);
            total_popCount += buy;

            n -= buy * cost;

            cost *= 2;
        }

        cout << total_popCount << endl;

    }
    return 0;
}