#include <bits/stdc++.h>
using namespace std;

struct DSU {
    vector<int> parent;
    DSU(int n) {
        parent.resize(n);
        for (int i = 0; i < n; ++i) parent[i] = i;
    }

    int find(int i) {
        if (parent[i] == i) return i;
        return parent[i] = find(parent[i]);
    }

    bool unite(int i, int j) {
        int root_i = find(i);
        int root_j = find(j);

        if (root_i != root_j) {

            parent[root_i] = root_j;
            return true;
        }
        return false;
    }
};

void solve() {
    int n;
    cin >> n;
    vector<string> A(n);

    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }


    for (int i = 0; i < n; ++i) {
        if (A[i][i] == '0') {
            cout << "No\n";
            return;
        }
    }

    vector<bitset<500>> R(n), C(n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {

            if (A[i][j] == '1') {
                R[i].set(j);
                C[j].set(i);
            }
        }
    }

    vector<pair<int, int>> edges;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {

            if (i != j && A[i][j] == '1') {
                if ((R[i] & C[j]).count() == 2) {
                    edges.push_back({i, j});
                }
            }
        }
    }

    if (edges.size() != n - 1) {
        cout << "No\n";
        return;
    }

    DSU dsu(n);
    for (auto& e : edges) {
        if (!dsu.unite(e.first, e.second)) {
            cout << "No\n";
            return;
        }
    }

    vector<vector<int>> adj(n);
    for (auto& e : edges) {
        adj[e.first].push_back(e.second);
    }

    vector<string> B(n, string(n, '0'));
    for (int i = 0; i < n; ++i) {

        vector<int> q;
        q.reserve(n);
        q.push_back(i);

        B[i][i] = '1';
        int head = 0;
        
        while (head < q.size()) {
            int u = q[head++];
            for (int v : adj[u]) {
                if (B[i][v] == '0') {
                    B[i][v] = '1';
                    q.push_back(v);
                }
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        if (A[i] != B[i]) {
            cout << "No\n";
            return;
        }
    }

    cout << "Yes\n";
    for (auto& e : edges) {
        cout << e.first + 1 << " " << e.second + 1 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}