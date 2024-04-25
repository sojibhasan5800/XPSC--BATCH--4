

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int konica;
    cin >> konica;
    while (konica--)
    {
        /* code */

        string s;
        cin >> s;
        bool flag = false;
        for (int i = 0; i < (s.size() / 2) - 1; i++)
        {
            /* code */
            if (s[i] != s[i + 1])
            {
                flag = true;
                break;
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}