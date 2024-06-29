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
        
        int n, m;
        cin >> n >> m;
        vector<int> candi(n), choclate(n);
        map<ll, ll> mp;
        ll cnt = 0;
        for (int &i : candi)
        {
            cin >> i;
        }
        for (int &i : choclate)
        {
            cin >> i;
            int x = i % m;
            mp[x]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (candi[i] % m == 0)
            {
                if (mp[0])
                {
                    cnt += mp[0];
                }
            }
            else
            {

                int temp = candi[i] % m;
                if (mp[m - temp])
                {
                    cnt += mp[m - temp];
                }
            }
        }
        cout << cnt << endl;
    }

    return 0;
}