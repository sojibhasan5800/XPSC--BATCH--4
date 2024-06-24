#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n + 1), ans(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
  int x= n,y=1;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            ans[x] = v[i];
            x--;
        }
        else
        {
            ans[y] = v[i];
            y++;
        }
    }
  
    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}