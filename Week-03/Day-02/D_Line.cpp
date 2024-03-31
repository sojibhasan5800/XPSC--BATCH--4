#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

    int t, n;
    ll ans, ch;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> s;
        ans = 0;
        ll ch[n];
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                ans += i;
            }
            else
            {
                ans += n - i - 1;
            }
            if (s[i] == 'L')
            {
                ch[i] = n - i - 1 - (i);
            }
            else
            {
                ch[i] = i - (n - i - 1);
            }
        }

        sort(ch, ch + n, greater<int>());
        // reverse(ch, ch + n);

        for (int j = 0; j < n; j++)
        {
            if (ch[j] > 0)
            {
                ans += ch[j];
            }
            cout << ans << " ";
        }
        cout << endl;
    }

    return 0;
}