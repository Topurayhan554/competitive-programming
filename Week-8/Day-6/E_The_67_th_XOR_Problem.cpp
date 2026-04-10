#include <bits/stdc++.h>
using namespace std; 

const int MAXN = 300005;
const int MAXBITS = 30;

struct TrieNode {
    int children[2];
};

TrieNode trie[MAXN * (MAXBITS + 2)];
int node_count = 0;

int createNode() {
    node_count++;
    trie[node_count].children[0] = trie[node_count].children[1] = 0;
    return node_count;
}

void insert(int val) {
    int curr = 0;
    for (int i = MAXBITS; i >= 0; i--) {
        int bit = (val >> i) & 1;
        if (!trie[curr].children[bit]) {
            trie[curr].children[bit] = createNode();
        }
        curr = trie[curr].children[bit];
    }
}

int getMaxXor(int val) {
    int curr = 0;
    int res = 0;
    for (int i = MAXBITS; i >= 0; i--) {
        int bit = (val >> i) & 1;
        if (trie[curr].children[1 - bit]) {
            res |= (1 << i);
            curr = trie[curr].children[1 - bit];
        } else if (trie[curr].children[bit]) {
            curr = trie[curr].children[bit];
        } else {
            return 0; 
        }
    }
    return res;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    node_count = 0;
    trie[0].children[0] = trie[0].children[1] = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int ans = 0;
    insert(a[0]);
    for (int i = 1; i < n; i++) {
        ans = max(ans, getMaxXor(a[i]));
        insert(a[i]);
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}