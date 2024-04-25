

#include <bits/stdc++.h>
using namespace std;
int n = 0, a = 0, b = 0;
long long ans = 0;
void ok()
{
    cin >> a >> b >> n;
    ans = b;
    for (int i = 0, x = 0; i < n; i++)
    {
        /* code */
        cin >> x;
        ans += min(a - 1, x);
    }
    cout << ans << endl;
}
int main()
{

    int t = 0;
    cin >> t;

    while (t--)
    {
        /* code */
        ok();
    }

    return 0;
}


