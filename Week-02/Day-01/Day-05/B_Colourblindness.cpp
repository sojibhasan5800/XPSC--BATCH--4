#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, e;
        cin >> s >> e;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != e[i] && (s[i] == 'R' || e[i] == 'R'))
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}