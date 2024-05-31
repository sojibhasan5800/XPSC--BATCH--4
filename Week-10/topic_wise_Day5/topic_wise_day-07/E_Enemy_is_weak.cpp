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
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    vector<int> greater(n), smaller(n);
    pbds<int> after, before;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        after.insert(v[i]);
        greater[i] = after.size() - after.order_of_key(v[i]) - 1;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        before.insert(v[i]);
        smaller[i] = before.order_of_key(v[i]);
    }
    for(int i=0;i<n;i++){
        ans+=greater[i]*smaller[i];
    }
    cout<<ans<<endl;

    return 0;
}