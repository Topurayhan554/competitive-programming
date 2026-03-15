#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    map<int, int> counts;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int color;
            cin >> color;
            counts[color]++;
        }
    }
    
    if(n == 1){
        cout << "NO" << endl;
        return;
    }

    bool possible = true;
    int limit = n * (n - 1);

    for(auto const&[color, count] : counts){
        if(count > limit){
            possible = false;
            break;
        }
    }

    if(possible){
        cout << "YES" << endl;
    }
    else{
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