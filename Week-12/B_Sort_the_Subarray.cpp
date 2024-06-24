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
        vector<int> a(n), b(n);
        for (auto &i : a)
        {
            cin >> i;
        }
        for (auto &i : b)
        {
            cin >> i;
        }
        int l = 0, r = n - 1;
        while (l < n)
        {
            if (a[l] == b[l])
            {
                l++;
            }
            else
            {
                break;
            }
        }
        while (r >= 0)
        {
            if (a[r] == b[r])
            {
                r--;
            }
            else
            {
                break;
            }
        }
        while (l > 0 && b[l - 1] <=b[l])
        {
            l--;
        }
        while (r < n - 1 && b[r + 1] >= b[r])
        {
            r++;
        }
        cout << l + 1 << " " << r + 1 << endl;
    }

    return 0;
}