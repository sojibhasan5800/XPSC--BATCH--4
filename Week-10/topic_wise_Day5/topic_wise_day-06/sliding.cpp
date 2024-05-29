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
  for (int i = 0; i < k; i++)
  {
    pb.insert({v[i], i});
  }
  auto old_m = pb.find_by_order((k + 1) / 2 - 1);
  int old_val = old_m->first;
  ll d = 0;
  for (int i = 0; i < k; i++)
  {
    d += abs(v[i] - old_val);
  }
  for (int i = 0; i < n - k; i++)
  {
    pb.erase(pb.find_by_order(pb.order_of_key({v[i],i})));
    pb.insert({v[i + k], i + k});
    auto per_m = pb.find_by_order((k + 1) / 2 - 1);
    int per_val = per_m->first;
    d += abs(v[i + k] - per_val) - abs(old_val - v[i]);
    if (k % 2 == 0)
    {
      d -= (per_val - old_val);
    }
    int old_val = per_val;

    cout << " " << d;
  }

  return 0;
}