#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int switches = 0;
    char curr = 'R';
    
    for (char c : s) {
        if (curr != c) {
            switches++;
            curr = c;
        }
        curr = (curr == 'R' ? 'B' : 'R');
    }
    
    cout << switches << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
