#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int &i : a)
        {
            cin >> i;
        }
     vector<ll>v(33,0);

        for (int i = 0; i < n; i++)
        {
            ll k = a[i];
             ll cnt = 0;
            while (k > 0)
            {
                k = k / 2;
                cnt++;
            }
            v[cnt]++;
        }

        ll ans = 0;
        for (int i = 0; i <=   32; i++)
        {
            if (v[i] >= 2)
            {
                ans +=(v[i]*(v[i]-1)/2);
            }
        }
        cout << ans << endl;
    }

    return 0;
}
