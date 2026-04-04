#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int cost_to_have_2026 = 4;
    for(int i=0;i<=n-4;i++){
        int diff = 0;
        string target = "2026";

        for(int j=0;j<4;j++){
            if(s[i+j] != target[j]){
                diff++;
            }
        }

        cost_to_have_2026 = min(cost_to_have_2026, diff);
    }

    int cost_to_remove_2025 = 0;
    for(int i=0;i<=n-4;i++){
        if(s.substr(i, 4) == "2025"){
            cost_to_remove_2025++;
            i+=3;
        }
        
    }

    int ans = min(cost_to_have_2026, cost_to_remove_2025);
    cout << ans << endl;
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