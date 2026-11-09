#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Tcase;
    cin >> Tcase;

    const int MAXC = 512;
    const int BITS = 35;

    while (Tcase--)
    {
        int n;
        cin >> n;

        vector<int> cnt(25, 0);
        long long total = 0;

        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            cnt[x]++;
            total += (1LL << x);
        }

        long long half = total / 2;

        long long dp[MAXC][2], ndp[MAXC][2];

        for (int i = 0; i < MAXC; ++i)
        {
            dp[i][0] = dp[i][1] = -1;
        }
        dp[0][0] = 0;

        for (int bit = 0; bit < BITS; ++bit)
        {
            for (int i = 0; i < MAXC; ++i)
            {
                ndp[i][0] = ndp[i][1] = -1;
            }

            int c = (bit < 25 ? cnt[bit] : 0);
            int halfBit = (half >> bit) & 1LL;

            for (int carry = 0; carry < MAXC; ++carry)
            {
                for (int borrow = 0; borrow < 2; ++borrow)
                {
                    long long cur = dp[carry][borrow];
                    if (cur < 0)
                        continue;

                    for (int take = 0; take <= c; ++take)
                    {
                        int sum = carry + take;
                        int curBit = sum & 1;
                        int ncarry = sum >> 1;

                        int nborrow = (curBit + borrow > halfBit ? 1 : 0);

                        long long nval = cur;
                        if (curBit)
                            nval += (1LL << bit);

                        if (nval > ndp[ncarry][nborrow])
                        {
                            ndp[ncarry][nborrow] = nval;
                        }
                    }
                }
            }

            memcpy(dp, ndp, sizeof(dp));
        }

        long long S = dp[0][0];
        long long answer = S * (total - S);

        cout << answer << '\n';
    }

    return 0;
}