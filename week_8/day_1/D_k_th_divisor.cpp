#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

void ok()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            a.push_back(i);
            if ((n / i) != i)
            {
                a.push_back(n / i);
            }
        }
    }

    sort(a.begin(), a.end());

    if (a.size() < k)
    {
        cout << -1 << br;
        return;
    }
    cout << a[k - 1] << br;
};
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    t = 1;
    while (t--)
    {

        ok();
    }
    return 0;
}