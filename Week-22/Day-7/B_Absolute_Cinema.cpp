#include <bits/stdc++.h>
using namespace std; 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<long long> a(n), b(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }

        long long sum_max = 0;
        long long max_min = 0;

        for(int i=0;i<n;i++){
            sum_max += max(a[i], b[i]);
            max_min = max(max_min, min(a[i], b[i]));
        }

        cout << sum_max + max_min << endl;
    }
    return 0;
}