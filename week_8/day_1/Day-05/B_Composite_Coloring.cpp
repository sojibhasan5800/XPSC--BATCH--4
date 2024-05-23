#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{

    ll n, tmp = 0, count = 0;

    vector<ll> v = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};

    cin >> n;

    vector<int> res(n, 0), flag(50, -1);

    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        for (int j = 0; j < v.size(); j++)
        {

            if (tmp % v[j] == 0)
            {
                if (flag[v[j]] == -1)
                    count++, flag[v[j]] = count;
                res[i] = flag[v[j]];
                break;
            }
        };
        ;
    }
    cout << count << endl;

    for (int x : res)
    {
        cout << x << " ";
    }

    cout << endl;

    /*
    help
    7 4 11 15

    */
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

   ll t;
   cin>>t;
    while (t--)
        // cout << "Case #" << count << ":",
        solve();

    return 0;
}