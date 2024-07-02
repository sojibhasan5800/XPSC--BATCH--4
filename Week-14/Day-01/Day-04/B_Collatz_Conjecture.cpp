#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define ll long long int
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y, k;
        cin >> x >> y >> k;
        x++;
        k--;
        bool flag = true;
        while (x != y)
        {
            flag = false;
            if (x % y == 0)
            {
                while (x % y == 0)
                {
                    x /= y;
                }
            }
           
            if  (k == 0)
            {
                cout << x << endl;
                break;
            }
            ll sub_need = y - x % y;
            if (sub_need <= k)
            {
                x += sub_need;
                k -= sub_need;
            }
            else
            {
                cout << x + k << endl;
                break;
            }
        }
        if (flag)
        {
            ll need = k % (y - 1);
            cout << 1 + need << endl;
        }
    }

    return 0;
}