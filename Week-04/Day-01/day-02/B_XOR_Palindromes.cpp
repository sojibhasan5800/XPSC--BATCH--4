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
        string s, ans = "";
        cin >> s;
        int l = 0, r = n - 1;
        int buggish = 0, gd_pairs = 0;
        while (l < r)
        {
            if (s[l] == s[r])
            {
                gd_pairs += 2;
            }
            else
            {
                buggish++;
            }
            l++;
            r--;
        }
       
        for (int i = 0; i <= n; i++)
        {
            int total = i;
            total -= buggish;
            if (total < 0)
            {
                ans.push_back('0');
                continue;
            }
            total = max((total%2), total - gd_pairs);
            total = max(0, total - (n % 2));
            if (total == 0)
            {
                ans.push_back('1');
            }
            else
            {
                ans.push_back('0');
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}