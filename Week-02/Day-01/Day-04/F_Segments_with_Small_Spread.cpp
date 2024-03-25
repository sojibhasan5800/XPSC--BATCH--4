#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long n, k;
    cin >> n >> k;
    long long a[n];
    for (auto &i : a)
    {
        cin >> i;
    }
    long long ans = 0;
    int l = 0, r = 0;
    multiset<long long> s;

    while (r < n)
    {
        s.insert(a[r]);
        long long mx = *s.rbegin();
        long long mn = *s.begin();
        if (mx - mn <= k)
        {
            ans += (r - l + 1);
        }
        else
        {

            while (l < r)
            {
                long long mx = *s.rbegin(), mn = *s.begin();
                if (mx - mn <= k)
                {
                    break;
                }
                auto it = s.find(a[l]);
                s.erase(it);
                l++;
            }
            long long mx = *s.rbegin(), mn = *s.begin();
            if (mx - mn <= k)
            {
                ans += (r - l + 1);
            }
        }
        r++;
    }
    cout<<ans<<endl;

    return 0;
}