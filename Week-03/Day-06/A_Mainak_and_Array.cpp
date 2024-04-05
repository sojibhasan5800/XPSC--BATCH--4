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
        int a[n];
        for (auto &i : a)
        {
            cin >> i;
        }
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        int mx = a[n - 1] - a[0];
        for (int i = 1; i <n; i++)
        {
            mx = max(mx, (a[i] - a[0]));
        }
        for (int i = 0; i < n - 1; i++)
        {
            mx = max(mx, (a[n - 1] - a[i]));
        }
        for (int i = 1; i < n ; i++)
        {
            mx = max(mx, (a[i - 1] - a[i]));
        }
        cout << mx << endl;
    }
  

    }

    return 0;
}