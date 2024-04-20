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
    sort(v.begin(), v.end());
    while (k--)
    {
        int key;
        cin >> key;
        bool flag = false;
        int l = 0, r = v.size() - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (key == v[mid])
            {
                flag = true;
                break;
            }
            else if (key > v[mid])
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (flag)
            cout << "YES" << '\n';
        else
            cout << "NO"
                 << "\n";
    }

    return 0;
}