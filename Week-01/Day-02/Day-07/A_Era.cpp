#include <bits/stdc++.h>
using namespace std;

int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int a[n + 1];
    long long int cnt = 0;

    for (int i = 1; i <= n; i++)
    {
      cin >> a[i];
    }
    long long int i = 1, j = 1;
    while (j <= n)
    {
      if (a[j] > i)
      {
        long long int ans = abs(a[j] - i);
        cnt += ans;
        i = (i + ans) + 1;
        j++;
        continue;
      }
      i++;
      j++;
    }

    cout << cnt << endl;
  }

  return 0;
}