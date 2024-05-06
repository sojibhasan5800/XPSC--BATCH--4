#include <bits/stdc++.h>
using namespace std;
const int N = (int)1e6 + 5;
#define ll long long int
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

int main()
{
    Faster;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<ll> freq(n + 2, 0);
        for (int i = 0; i < n; i++)
        {
            if (a[i] > n)
                continue;
            freq[a[i]]++;
        }

        ll ans = 0;
        for (int i = 1; i <= n; i++)
        {
            ll cnt = 0;
            for (ll x = 1; x * x <= i; x++)
            {
                if (i % x == 0)
                {
                    cnt += freq[x];
                    if (x * x != i)
                    {
                        cnt += freq[i / x];
                    }
                }
            }
            ans = max(ans, cnt);
        }

        cout << ans << endl;
    }
    return 0;
}
