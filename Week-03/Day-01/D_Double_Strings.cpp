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
    vector<string> v;
    map<string, bool> mp;
    vector<int> v2;
    for (int i = 0; i < n; i++)
    {
      string s;
      cin >> s;
      v.push_back(s);
      mp[s] = true;
    }
    for (int i = 0; i < n; i++)
    {
      bool flag = false;

      for (int j = 1; j < v[i].size(); j++)
      {
        string s1 = v[i].substr(0, j);
        string s2 = v[i].substr(j, v[i].size() - 1);
        if (mp[s1] && mp[s2])
        {
          flag = true;
          break;
        }
      }
      if (flag)
      {
        v2.push_back(1);
      }
      else
      {
        v2.push_back(0);
      }
    }
    for(int x :v2){
      cout<<x;
    }
    cout<<endl;
  }

  return 0;
}