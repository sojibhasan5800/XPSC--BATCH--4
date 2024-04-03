#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<ll, ll>> vb;
        vector<pair<ll, ll>> va;
        vector<pair<ll, ll>> vc;

        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            va.push_back({a, i});
        }
        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            vb.push_back({a, i});
        }
        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            vc.push_back({a, i});
        }
        sort(va.begin(), va.end(), greater<>());
        sort(vb.begin(), vb.end(), greater<>());
        sort(vc.begin(), vc.end(), greater<>());

        long long sum = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                  if (va[i].second != vb[j].second && va[i].second != vc[k].second && vb[j].second != vc[k].second)
                    {
                        sum = max((va[i].first + vb[j].first + vc[k].first), sum);
                    } 
                     
                }
            }
        }

        cout << sum << endl;
    }
    return 0;
}
