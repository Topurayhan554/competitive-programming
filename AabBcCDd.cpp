#include <bits/stdc++.h>
using namespace std; 
void solve(){
    int N;
    cin >> N;
    string S;
    cin >> S;

    vector<int> freq(26, 0);
    for (int i = 0; i < N; i++) {
        char c = S[i];
        if (c >= 'A' && c <= 'Z') {
            c = c - 'A' + 'a';
        }
        freq[c - 'a']++;
    }

    sort(freq.begin(), freq.end(), greater<int>());
    int max_score = freq[0] + freq[1];
    
    cout << max_score << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}