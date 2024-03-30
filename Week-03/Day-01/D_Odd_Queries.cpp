#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int a[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        vector<int> pre(n + 1), suf(n + 2);
        for (int i = 1; i <= n; i++)
        {
            pre[i] = pre[i - 1] + a[i];
        }
        
        for (int i = n; i >= 1; i--)
        {

            suf[i] = suf[i + 1] + a[i];
        }
       

        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;
            long long sum, first, sec, thrid;
            first = pre[l - 1];

            sec = suf[r + 1];

            thrid = (r - l + 1) * k;
            sum = first + sec + thrid;
            if (sum % 2 != 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}