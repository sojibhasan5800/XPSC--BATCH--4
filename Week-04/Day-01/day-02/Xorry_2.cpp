#include <bits/stdc++.h>
using namespace std;
void solve(int n)
{
    int cnt = 0;
    int a = 1;
    while (a * 2 <= n)
    {
        a *= 2;
        cnt++;
    }
    bool flag = false;
    int ans = 1;
    for (int i = cnt - 1; i >= 0; i--)
    {
        if (n & (1 << i))
        {
            flag = true;
        }
        else
        {
            if (flag)
                ans = ans * 2;
        }
    }
    cout << ans << endl;
}

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
        solve(n);
    }

    return 0;
}