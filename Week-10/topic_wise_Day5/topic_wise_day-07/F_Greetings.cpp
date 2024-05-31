#include <bits/stdc++.h>
#define ll long long int
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
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
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            v.push_back({x, y});
        }
        sort(v.begin(), v.end());
        ll ans = 0;
        pbds<int>pb;
        for(int i=0;i<n;i++){
           ans+=pb.size()-pb.order_of_key(v[i].second);
           pb.insert(v[i].second);
           
        }
        cout<<ans<<endl;
    }

    return 0;
}