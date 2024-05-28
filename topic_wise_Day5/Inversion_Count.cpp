#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define nextline endl
using namespace __gnu_pbds;

using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
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
        vector<int> v(n);
        for (int &i : v)
        {
            cin >> i;
        }
        pbds<int> pb;
        int cnt = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            pb.insert(v[i]);
            cnt+=pb.order_of_key(v[i]);
        }

        cout << cnt << nextline;
    }

    return 0;
}