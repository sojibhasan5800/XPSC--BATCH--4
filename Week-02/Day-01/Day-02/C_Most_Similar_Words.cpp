#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, len;
        cin >> n >> len;
        vector<string> v;
        v.clear();
        for (int i = 0; i < n; i++)
        {
            string k;
            for (int j = 0; j < len; j++)
            {
                char c;
                cin >> c;
                k += c;
            }
            v.push_back(k);
        }

        int mn = INT_MAX;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int x = 0;
                string s1 = v[i];
                string s2 = v[j];
                for (int k = 0; k < len; k++)
                {
                    // x+=abs(s[i][k]-s[j][k]);
                    x += abs(s1[k] - s2[k]);
                }
                mn = min(x, mn);
            }
        }
        if (mn == INT_MAX)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << mn << endl;
        }
    }

    return 0;
}