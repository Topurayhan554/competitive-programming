#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin >> n;
    vector<int> a(n);
    int min_value = 101;

    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i] < min_value){
            min_value = a[i];
        }
    }

    int count = 0;
    for(int i=0;i<n;i++){
        if(a[i] == min_value){
            count++;
        }
    }

    if(count > 1){
        cout << "YES" << "\n";
    }else{
        cout << "NO" << "\n";
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