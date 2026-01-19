#include <bits/stdc++.h>
using namespace std; 

long long calculate_value(int n, vector<int>& a) {
    long long total_sum = 0;
    int current_max = 0;
    for (int i = 0; i < n; i++) {
        current_max = max(current_max, a[i]);
        total_sum += current_max;
    }
    return total_sum;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long max_val = calculate_value(n, a);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(a[i], a[j]);
            max_val = max(max_val, calculate_value(n, a));
            swap(a[i], a[j]);
        }
    }

    cout << max_val << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}