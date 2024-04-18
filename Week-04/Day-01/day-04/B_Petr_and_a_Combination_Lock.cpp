#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool flag = false;

    for (int i = 0; i <= ((1 << n) - 1); i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                sum += a[j];
                sum %= 360;
            }
            else
            {
                sum -= a[j];
                sum %= 360;
            }
        }
        if (sum % 360 == 0)
        {
            flag = true;
        }
    }
    if (flag)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}