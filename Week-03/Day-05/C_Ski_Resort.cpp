#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;
        int cnt = 0;
        long long int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x > q)
            {
                if (cnt >= k)
                {
                    int t = cnt - k + 1;
                    ans += (1ll * t * (t + 1)) / 2;
                }
                cnt = 0;
            }
            else
            {
                cnt++;
            }
        }
        if (cnt >= k)
        {
            int t = cnt - k + 1;
            ans += (1ll * t * (t + 1)) / 2;
        }
        cout << ans << endl;
    }

    return 0;
}