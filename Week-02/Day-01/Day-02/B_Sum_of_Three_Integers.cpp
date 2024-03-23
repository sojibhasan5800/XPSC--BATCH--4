#include <bits/stdc++.h>
using namespace std;

int main()
{

  int k, s;
  cin >> k >> s;
  int cnt = 0;
  for (int a = 0; a <= k; a++)
  {
    for (int b = 0; b <= k; b++)
    {
      int c = s - a - b;
      if (c >= 0 && c <= k)
      {
        cnt++;
      }
    }
  }
  cout << cnt << endl;

  return 0;
}