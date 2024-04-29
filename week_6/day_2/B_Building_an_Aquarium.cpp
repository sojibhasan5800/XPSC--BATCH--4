#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, present_watr, l = 1;
        long long r = 0;
        cin >> n >> present_watr;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        r = 2e9;
        long long res = 0;
        while (l <= r)
        {

            long long total_water = 0;
            long long mid_height = (l + r) / 2;
            for (long long i = 0; i < n; i++)
            {
                if (a[i] < mid_height)
                {
                    total_water += (mid_height - a[i]);
                }
            }
            if (total_water <= present_watr)
            {
                res = mid_height;
                l = mid_height + 1;
            }
            else
            {
                r = mid_height - 1;
            }
        }

        cout << res << endl;
    }

    return 0;
}