#include <bits/stdc++.h>
using namespace std;
map<int, int> cnt;
int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        int divisor;
        cin >> divisor;

        int n = sqrt(divisor);

        for (int i = 2; i <= n; i++)
        {
            if (divisor % i == 0)
                cnt[i]++;
            while (divisor % i == 0)
                divisor /= i;
        }
        if (divisor > 1)
            cnt[divisor]++;
    }
    int ans = 1;
    for (auto it = cnt.begin(); it != cnt.end(); it++)
    {
        ans = max(ans, (*it).second);
    }
    cout << ans;
    return 0;
}