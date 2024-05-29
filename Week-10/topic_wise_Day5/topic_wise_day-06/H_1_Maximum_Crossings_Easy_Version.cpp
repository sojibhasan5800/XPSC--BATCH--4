#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

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
        ll ans = 0;
        vector<int> v(n);
        for (int &i : v)
        {
            cin >> i;
        }
        pbds<int> pb;
        for (int i = n - 1; i >= 0; i--)
        {
            ans += pb.order_of_key(v[i]+1);
            pb.insert(v[i]);
        }
        cout << ans << endl;
    }

    return 0;
}