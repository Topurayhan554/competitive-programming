#include <bits/stdc++.h>
using namespace std; 

void solve(){

    int n;
    cin >> n;
    string s;
    cin >> s;

    map<char, int> counts;
    for(char c : s){
        counts[c]++;
    }

    bool possible = true;

    for(auto const& [character, count] : counts ){
        if(count > 2){
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
    // if(!(cin >> t)) return 0;
    while(t--){
        solve();
    }
    return 0;
}