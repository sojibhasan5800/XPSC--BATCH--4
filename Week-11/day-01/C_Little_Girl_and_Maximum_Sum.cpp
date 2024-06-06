#include <bits/stdc++.h>
#define ll long long int
const int N = 1e6;
using namespace std;

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n, q;
  cin >> n >> q;
  vector<int> v(n);

  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  sort(v.begin(), v.end(), greater<>());

  vector<int> prefix(n + 1);
  while (q--)
  {
    int x, y;
    cin >> x >> y;
    x--, y--;
    prefix[x]++;
    prefix[y + 1]--;
  }
  for (int i = 1; i <= n; i++)
  {
    prefix[i] = prefix[i - 1] + prefix[i];
  }

  sort(prefix.rbegin(), prefix.rend());

  ll sum = 0;

  for (int i = 0; i < n; i++)
  {
    sum += (1LL * prefix[i] * v[i]);
  }

  cout << sum << endl;
  return 0;
}