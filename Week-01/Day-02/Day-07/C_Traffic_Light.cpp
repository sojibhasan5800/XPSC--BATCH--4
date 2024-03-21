#include <bits/stdc++.h>
using namespace std;

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
   string c;
    cin >> c;
    string word;
    cin >> word;
    word += word;
    int sz = word.size();
    int cnt = 0, res = 0;
    bool flag = false;
    if (c[0] == 'g')
    {
      cout << 0 << endl;
      continue;
    }

    for (int i = 0; i < sz; i++)
    {
      if (word[i] == 'g')
      {
        res = max(cnt, res);
        flag = false;
      }
      if (word[i] == c[0] && flag == false)
      {
        cnt = 0;
        flag = true;
      }
      if (flag)
      {
        cnt++;
      }
    }
    cout << res << endl;
  }

  return 0;
}