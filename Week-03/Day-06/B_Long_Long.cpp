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
        int a[n];
        long long sum = 0;
        for (auto &i : a)
        {
            cin >> i;
            sum += abs(i);
        }
        int op = 0;
        bool flag = false;
        for (int i = 0; i <= n; i++)
        {
            if (i == n || a[i] > 0)
            {
                if (flag)
                {
                    op++;
                    flag = false;
                }
            }
            else
            {
                if (a[i] < 0)
                {

                    flag = true;
                }
            }
        }
        cout << sum << " " << op << endl;
    }

    return 0;
}