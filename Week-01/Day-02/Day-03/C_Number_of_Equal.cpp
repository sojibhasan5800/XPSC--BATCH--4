#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    int a[n], b[m];

    for (int l = 0; l < n; l++)
    {
        cin >> a[l];
    }
    for (int l = 0; l < m; l++)
    {
        cin >> b[l];
    }
    long long int sum = 0;
    int l = 0, r = 0;
    while (l < n && r < m)
    {
        int cnt1 = 0, cnt2 = 0, cur = a[l];
        while (a[l] == cur && l < n)
        {
            cnt1++;
            l++;
        }
        while (cur > b[r])
        {
            r++;
        }
        while (b[r] == cur && r < m)
        {
            cnt2++;
            r++;
        }
        sum += (1ll * cnt1 * cnt2);
    }
    cout<<sum<<endl;

    return 0;
}