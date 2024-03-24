#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int n, s;
    cin >> n >> s;
    int a[n];
    for (auto &i : a)
    {
        cin >> i;
    }
    long long int sum = 0;
    int ans = 0;
    int l = 0, r = 0;
    while (r < n)
    {
        sum += a[r];
        if (sum <= s)
        {
            ans = max(ans, r - l + 1);
           
        }
        else
        {
            sum -= a[l];
            l++;
        }
        r++;
    }
    cout << ans << endl;

    return 0;
}