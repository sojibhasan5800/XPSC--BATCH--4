#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int a, b, c;
        cin >> a >> b >> c;
        int ans = abs(a - 1);
        int ans1 = abs(b - c) + (c - 1);
        if (ans == ans1)
        {
            cout << 3 << endl;
        }
        else if (ans < ans1)

        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }

    return 0;
}