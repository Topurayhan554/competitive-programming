#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> freq(101, 0);
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        freq[a]++;
    }
    
    int total_polygons = 0;
    for (int i = 1; i <= 100; ++i) {
        total_polygons += freq[i] / 3;
    }
    
    cout << total_polygons << "\n";
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