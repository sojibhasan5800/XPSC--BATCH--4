#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    while (k--)
    {
        int key;
        cin >> key;
        int l = 0, r = v.size() - 1;
        int ans = n;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (key <= v[mid])
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans + 1 << endl;
    }

    return 0;
}