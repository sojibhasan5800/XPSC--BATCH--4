#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define ll long long int
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int ans = 0;
        int cnt_0 = 0, cnt_1 = 0;
        for (char c : s)
        {
            if (c == '1')
            {
                cnt_1++;
            }
            else
            {
                cnt_0++;
            }
        }
        
        string t;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                if (cnt_1 != 0)
                {
                    t += '1';
                    cnt_1--;
                }
                else
                {
                    t += s[i];
                }
            }
            else
            {
                if (cnt_0 != 0)
                {
                    t += '0';
                    cnt_0--;
                }
                else
                {
                    t += s[i];
                }
            }
        }
        int i = 0, j = 0;
        while (i < n && j < n)
        {
            if (s[i] == t[j])
            {
                ans++;
                j++;
            }
            else
            {
                i++;
                j++;
            }
        }
      
        cout<<ans<<endl;
    }

    return 0;
}