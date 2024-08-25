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
        vector<int> v(n);
        set<int> s;
        for (int &i : v)
        {
            cin >> i;
            s.insert(i);
        }
        if (s.size() == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        sort(v.begin(), v.end());
        cout << "YES" << endl;
        int i = 0, j = n - 1;
        while (i <= j)
        {
            if (i == j)
            {
                cout << v[i];
                i++;
                j--;
                continue;
            }
            cout << v[i] << " " << v[j] << " ";
            i++;
            j--;
        }
        cout<<endl;
    };

    return 0;
}