#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string sa, sb;
        cin >> sa >> sb;
        int cnt1 = 0, cnt2 = 0;
        char x, y;
        for (int i = 0; i < sa.size(); i++)
        {
            if (sa[i] == 'X')
            {
                cnt1++;
            }
            else
            {
                x = sa[i];
            }
        }
        for (int i = 0; i < sb.size(); i++)
        {
            if (sb[i] == 'X')
            {
                cnt2++;
            }
            else
            {
                y = sb[i];
            }
        }
        if (x == y && x == 'S')
        {

            if (cnt1 > cnt2)
            {
                cout << "<" << endl;
            }
            else if (cnt1 == cnt2)
            {
                cout << "=" << endl;
            }
            else
            {
                cout << ">" << endl;
            }

            continue;
        }

        if (x == y && x == 'L')
        {
            if (cnt1 > cnt2)
            {
                cout << ">" << endl;
            }
            else if (cnt1 == cnt2)
            {
                cout << "=" << endl;
            }
            else
            {
                cout << "<" << endl;
            }

            continue;
        }
        if (x == 'M' && y == 'M')
        {
            cout << '=' << endl;
        }
        if (x == 'L')
        {
            cout << ">" << endl;
        }
        else if (y == 'L')
        {
            cout << "<" << endl;
        }

        else if (x == 'S' && y == 'M')
        {
            cout << "<" << endl;
        }
        else if (x == 'M' && y == 'S')
        {
            cout << ">" << endl;
        }
    }

    return 0;
}