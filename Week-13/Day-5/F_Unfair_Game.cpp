#include <bits/stdc++.h>
using namespace std; 

void solve(){
    int p1, p2, p3, p4;
    cin >> p1 >> p2 >> p3 >> p4;

    int max_wins = 0;

    int limit = min({p1, p2, p3});

    for(int x=0;x<=limit;x++){
        int cur_wins = x;

        cur_wins += (p1 - x) / 2;
        cur_wins += (p2 - x) / 2;
        cur_wins += (p3 - x) / 2;
        cur_wins += (p4) / 2;


        max_wins = max(max_wins, cur_wins);
    }

    cout << max_wins << endl;

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