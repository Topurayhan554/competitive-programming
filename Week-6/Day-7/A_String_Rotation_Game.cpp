#include <bits/stdc++.h>
using namespace std;

int countBlocks(string s){
    if(s.empty()){
        return 0;
    }

    int blocks = 1;
    for(int i=1;i<s.length();i++){
        if(s[i] != s[i-1]){
            blocks++;
        }
        
    }
    return blocks;
}

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int maxScore = 0;
    for(int i=0;i<n;i++){
        string rotated = s.substr(i) + s.substr(0, i);
        maxScore = max(maxScore, countBlocks(rotated));
    }

    cout << maxScore << endl;
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