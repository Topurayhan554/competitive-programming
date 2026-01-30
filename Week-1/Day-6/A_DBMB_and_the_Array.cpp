#include <bits/stdc++.h>
using namespace std; 

void solve(){
    int n, s, x;
    cin >> n >> s >> x;
    long long current_sum = 0;
    
    for(int i=0;i<n;i++){
        int val;
        cin >> val;
        current_sum += val;

    }

    long long dif = s - current_sum;

    if(dif >= 0 && dif % x == 0){
        cout << "YES" << endl;
    }
    else
    {
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