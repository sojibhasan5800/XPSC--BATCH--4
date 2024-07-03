#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s;
        string k;
        cin >> s >> k;
        int mn = INT_MAX;
        int l = 0, r = 0;
        int len = k.size();
        while (r < n)
        {

            if (r - l + 1 == len)
            {
                int cnt = 0;

                int temp = l;
                for (int i = 0; i < len; i++)
                {

                    if (s[temp] != k[i])
                    {
                        cnt++;
                    }
                    temp++;
                }

                mn = min(mn, cnt);

                l++;
                r++;
            }
            else
            {
                r++;
            }
        }

        cout << mn << endl;
    }
}
