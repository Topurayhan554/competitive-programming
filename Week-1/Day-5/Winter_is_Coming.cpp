#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int N, A, B;
        cin >> N >> A >> B;

        vector<int> temp(N);
        for (int i = 0; i < N; i++) {
            cin >> temp[i];
        }

        int wearCount = 0;
        bool wearing = false;

        for (int i = 0; i < N; i++) {
            if (temp[i] < A) {
                if (!wearing) {
                    wearCount++;
                    wearing = true;
                }
            }
            else if (temp[i] > B) {
                wearing = false;
            }
        }
        cout << wearCount << "\n";
    }
    return 0;
}
