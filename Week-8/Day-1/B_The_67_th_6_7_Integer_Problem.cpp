#include <bits/stdc++.h>
using namespace std; 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        long long total_sum = 0;
        vector<long long> a(7);
        for(int i=0;i<7;i++){
            cin >> a[i];
            total_sum += a[i];
        }

        long long max_val = a[0];
        for(int i=1;i<7;i++){
            if(a[i] > max_val){
                max_val = a[i];
            }
        }
        
        long long result = 2 * max_val - total_sum;
        cout << result << endl;
    }
    return 0;
}