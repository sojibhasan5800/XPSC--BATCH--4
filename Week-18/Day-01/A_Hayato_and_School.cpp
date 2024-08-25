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
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<int> v(n), od, ev;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 != 0)
                od.push_back(i + 1);
            else
                ev.push_back(i + 1);
        }
        if (od.size() >= 3)
        {
            cout << "YES" << endl;
            for (int i = 0; i < 3; i++)
            {
                cout << od[i] << " ";
            }
            cout << endl;
            continue;
        }
        if (od.size() >= 1 && ev.size() >= 2)
        {
            cout << "YES" << endl;
            cout << od[0] << " " << ev[0] << " " << ev[1] << endl;
            continue;
        }

        cout << "NO" << endl;
    };

    return 0;
}