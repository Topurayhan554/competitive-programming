#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    int max_streak = 0;
    int current_streak = 0;

    for(int i=0;i<n;i++){
        int problem;
        cin >> problem;
        if(problem > 0){
            current_streak++;
        }
        else{
            max_streak = max(max_streak, current_streak);
            current_streak = 0;
        }
    }
    max_streak = max(max_streak, current_streak);
    cout << max_streak << endl;
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