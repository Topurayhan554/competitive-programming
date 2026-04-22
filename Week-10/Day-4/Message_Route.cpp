#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    if (!(cin >> n >> m)) return 0;

    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> visited(n + 1, false);
    vector<int> parent(n + 1, 0); 
    
    queue<int> q;

    q.push(1);
    visited[1] = true;

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        if (current == n) break;

        for (int neighbor : adj[current]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                parent[neighbor] = current;
                q.push(neighbor);
            }
        }
    }

    if (!visited[n]) {
        cout << "IMPOSSIBLE\n";
    } else {
        vector<int> path;
        int curr = n;
        while (curr != 0) {
            path.push_back(curr);
            curr = parent[curr];
        }
        
        reverse(path.begin(), path.end());
        
        cout << path.size() << "\n";
        for (int i = 0; i < path.size(); ++i) {
            cout << path[i] << (i == path.size() - 1 ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}