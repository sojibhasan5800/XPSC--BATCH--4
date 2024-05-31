#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    map<pair<ll, ll>, ll> mp1;
    map<pair<ll, ll>, map<ll, ll>> mp11;
    map<pair<ll, ll>, ll> mp2;
    map<pair<ll, ll>, map<ll, ll>> mp22;
    map<pair<ll, ll>, ll> mp3;
    map<pair<ll, ll>, map<ll, ll>> mp33;
    ll ans = 0;
    for (ll i = 0; i < n - 2; i++)
    {
        ll val1 = a[i];
        ll val2 = a[i + 1];
        ll val3 = a[i + 2];
        if (mp1.count({val1, val2}))
        {
            ll sum = mp11[{val1, val2}][val3];
            ll total = mp1[{val1, val2}];
            ans += total - sum;
        }
        if (mp2.count({val2, val3}))
        {
            ll sum = mp22[{val2, val3}][val1];
            ll total = mp2[{val2, val3}];
            ans += total - sum;
        }
        if (mp3.count({val1, val3}))
        {
            ll sum = mp33[{val1, val3}][val2];
            ll total = mp3[{val1, val3}];
            ans += total - sum;
        }
        mp1[{val1, val2}]++;
        mp11[{val1, val2}][val3]++;
        mp2[{val2, val3}]++;
        mp22[{val2, val3}][val1]++;
        mp3[{val1, val3}]++;
        mp33[{val1, val3}][val2]++;
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;

    while (t--)
    {
       // solve();
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (auto &i : v)
        {
            cin >> i;
        }

        map<pair<ll, ll>, ll> mp_a;
        map<pair<ll, ll>, map<ll, ll>> mp_aa;
        map<pair<ll, ll>, ll> mp_b;
        map<pair<ll, ll>, map<ll, ll>> mp_bb;
        map<pair<ll, ll>, ll> mp_c;
        map<pair<ll, ll>, map<ll, ll>> mp_cc;
        ll ans = 0;
        for (ll i = 0; i < n - 2; i++)
        {
            ll val1 = v[i];
            ll val2 = v[i + 1];
            ll val3 = v[i + 2];
            if (mp_a.count({val1, val2}))
            {
                ll sum = mp_aa[{val1, val2}][val3];

                ll total = mp_a[{val1, val2}];
                ans += total - sum;
            }
            if (mp_b.count({val2, val3}))
            {
                ll sum = mp_bb[{val2, val3}][val1];
                ll total = mp_b[{val2, val3}];
                ans += total - sum;
            }
            if (mp_c.count({val1, val3}))
            {
                ll sum = mp_cc[{val1, val3}][val2];
                ll total = mp_c[{val1, val3}];
                ans += total - sum;
            }
            mp_a[{val1, val2}]++;
            mp_aa[{val1, val2}][val3]++;
            mp_b[{val2, val3}]++;
            mp_bb[{val2, val3}][val1]++;
            mp_c[{val1, val3}]++;
            mp_cc[{val1, val3}][val2]++;
        }
        cout << ans << endl;
    }
    return 0;
}