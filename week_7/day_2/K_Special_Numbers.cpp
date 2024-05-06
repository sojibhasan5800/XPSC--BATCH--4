#include <bits/stdc++.h>
using namespace std;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define nl '\n'
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;

ll kona(ll base, ll n)
{
    ll result = 1;
    while (n)
    {
        if (n % 2 == 1)
        {
            result = (result * base) % mod;
            n--;
        }
        else
        {
            base = (base * base) % mod;
            n /= 2;
        }
    }
    return result % mod;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        string v;
        while (k)
        {
            if (k % 2 == 0)
                v += '0';
            else
                v += '1';
            k /= 2;
        }
        ll ans = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == '1')
                ans += kona(n, i);
            ans %= mod;
        }
        cout << ans << endl;
    }
}
