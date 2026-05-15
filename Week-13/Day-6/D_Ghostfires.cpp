#include <bits/stdc++.h>
using namespace std; 

struct Color {
    int count;
    char type;
};

bool compareColors(const Color& a, const Color& b) {
    return a.count > b.count;
}

void solve() {
    int r, g, b;
    cin >> r >> g >> b;

    vector<Color> colors = {{r, 'R'}, {g, 'G'}, {b, 'B'}};
    string res = "";

    while (true) {
        sort(colors.begin(), colors.end(), compareColors);
        
        bool added = false;
        for (int i = 0; i < 3; i++) {

            if (colors[i].count > 0) {
                char current = colors[i].type;
                int n = res.length();
                
                bool condition1 = (n == 0 || res[n - 1] != current);
                bool condition2 = (n < 3 || res[n - 3] != current);
                
                if (condition1 && condition2) {
                    
                    res += current;
                    colors[i].count--;
                    added = true;
                    break;
                }
            }
        }
        
        if (!added) break;
    }

    cout << res << "\n";
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