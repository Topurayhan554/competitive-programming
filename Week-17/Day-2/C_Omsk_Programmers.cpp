#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long a, b, x;
    cin >> a >> b >> x;

    vector<long long> A, B;
    long long temp_a = a;

    while(true){
        A.push_back(temp_a);
        if(temp_a == 0) break;
        temp_a /= x;

    }

    long long temp_b = b;
    while(true){
        B.push_back(temp_b);
        if(temp_b == 0) break;
        temp_b /= x;
    }

    long long min_ops = -1;
    for(size_t i = 0;i<A.size();i++){
        for(size_t j=0;j<B.size();j++){
            long long cur_ops = i+j + abs(A[i] - B[j]);

            if(min_ops == -1 || cur_ops < min_ops){
                min_ops = cur_ops;
            }
        }

        
    }
    cout << min_ops << endl;
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