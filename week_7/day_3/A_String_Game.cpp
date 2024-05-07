#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    for (auto a : s)
    {
        if (a == '1')
            cnt++;
    }
    int cnt1 = n - cnt;
    int ans = min(cnt, cnt1);
    if (ans % 2 == 0)
    {
        cout << "Ramos" << endl;
    }
    else
    {
        cout << "Zlatan" << endl;
    }
}

int32_t main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // your code goes here
    return 0;
}