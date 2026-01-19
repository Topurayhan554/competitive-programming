
void solve() {
    int n, k, m;
    cin >> n >> k >> m;
    string s;
    cin >> s;

    string res = "";
    set<char> found;
    

    for (char c : s) {
        if (c < 'a' + k) {
            found.insert(c);
        }
        if (found.size() == k) {
            res += c;
            found.clear();
        }
    }

    if (res.length() >= n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
        
        char missing;
        for (int i = 0; i < k; i++) {
            char current = (char)('a' + i);
            if (found.find(current) == found.end()) {
                missing = current;
                break;
            }
        }

        while (res.length() < n) {
            res += missing;
        }
        cout << res << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}