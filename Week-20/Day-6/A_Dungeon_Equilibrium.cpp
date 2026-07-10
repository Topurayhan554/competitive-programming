#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    map<int, int> freq;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        freq[x]++;

    }

    int deletions = 0;
    for(auto const &[x, c]: freq){
        if(x == 0){
            deletions += c;
        }
        else if(c >= x){
            deletions += (c - x);
        }else {
            deletions += c;
        }
    }

    cout << deletions << endl;
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