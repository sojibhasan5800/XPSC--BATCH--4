#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;
    int cnt = 0;
    while (a > 0 || b > 0)
    {
        if (a > 0 && b > 0)
        {
            cnt += 2;
            a--;
            b--;
        }
        else if (a > 0)
        {
            if (a == 1)
            {
                a--;
                cnt++;
            }
            else
            {
                a--;
                cnt += 2;
            }
        }
        else
        {
            if (b == 1)
            {
                b--;
                cnt++;
            }
            else
            {
                b--;
                cnt += 2;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}