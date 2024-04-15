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
        int a[n];
        for (auto &i : a)
        {
            cin >> i;
        }
        int x = 0;

        for (int i = 0; i < n; i++)
        {
            x ^= a[i];
        }
        for (int i = 0; i < n; i++)
        {
            a[i] ^= x;
        }
        int y = 0;
        for (int i = 0; i < n; i++)
        {
            y ^= a[i];
        }
  
        if (y == 0)
        {
            cout << x << endl;
        }
        else
        {
            cout << -1 << '\n';
        }
    }

    return 0;
}