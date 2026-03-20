#include <bits/stdc++.h>
using namespace std; 

struct Node {
    int val;
    int idx;
};
Node merge(Node a, Node b) {
    if (a.val > b.val) return a;
    if (b.val > a.val) return b;
    return (a.idx > b.idx) ? a : b;
}

vector<Node> tree;
vector<int> arr;

void build(int node, int start, int end) {
    if (start == end) {
        tree[node] = {arr[start], start};
        return;
    }
    int mid = (start + end) / 2;
    build(2 * node, start, mid);
    build(2 * node + 1, mid + 1, end);
    tree[node] = merge(tree[2 * node], tree[2 * node + 1]);
}

Node query(int node, int start, int end, int l, int r) {
    if (r < start || end < l) return {-1, -1};
    if (l <= start && end <= r) return tree[node];
    int mid = (start + end) / 2;
    return merge(query(2 * node, start, mid, l, r),
                 query(2 * node + 1, mid + 1, end, l, r));
}

void solve() {
    int n;
    if (!(cin >> n)) return;
    
    arr.assign(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    tree.assign(4 * n + 1, {-1, -1});
    build(1, 1, n);

    int operations = 0;
    int current_L = n;

    while (current_L >= 1) {
        Node res = query(1, 1, n, 1, current_L);
        current_L = res.idx - 1;
        operations++;
    }

    cout << operations << "\n";
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