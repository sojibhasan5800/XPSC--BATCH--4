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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int &i : v)
    {
        cin >> i;
    }
    pbds<pair<int, int>> pb;

    int l = 0, r = 0;
    int pos = k;
    if (k % 2 == 0)
    {
        pos = k / 2;
        pos--;
    }
    else
    {
        pos = k / 2;
    }

    while (r < n)
    {
        pb.insert({v[r], r});
        if (r - l + 1 == k)
        {
            ll d = 0;
            auto mid = pb.find_by_order(pos);
            for (int i = l; i <= r; i++)
            {
                d += abs(v[i] - mid->first);
            }
            pb.erase({v[l],l});
            l++;
            cout<<d<<" ";
        }

        r++;
    }

    return 0;
}