#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        vector<ll> a(n);
        long long neg = 0, ans = 0,mn=LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> a[i];
            if (a[i] < 0)
            {
                neg++;
            }
            ans += abs(a[i]);
            // res+=a[i];
            mn =min(mn,abs(a[i]));
        }
        if (neg % 2 == 1)
            ans -= (2LL * mn);

        cout << ans << endl;
    }
    return 0;
}

