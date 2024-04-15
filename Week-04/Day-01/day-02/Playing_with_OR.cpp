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
        int n, k;
        cin >> n >> k;
        int a[n];
        for (auto &i : a)
        {
            cin >> i;
        }
        int cnt = 0;
        int odd = 0;
        for (int i = 0; i < k; i++)
        {
            if (a[i] % 2 != 0)
                odd++;
        }
        if (odd > 0)
            cnt++;
        for (int i = k; i < n; i++)
        {
            if (a[i - k] % 2 != 0)
                odd--;
            if (a[i] % 2 != 0)
                odd++;
            if (odd > 0)
                cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}