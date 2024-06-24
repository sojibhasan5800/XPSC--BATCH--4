#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        if (n < k || x < k -1)
        {
            cout << -1 << endl;
        }
        else
        {
            int sum = k - 1;
            int ans = (sum * (sum + 1)) / 2;
            int buggish = n - k;
            if (x == k)
            {
                ans += (sum * buggish);
            }
            else
            {
                ans += (x * buggish);
            }
            cout << ans << endl;
        }
    }

    return 0;
}