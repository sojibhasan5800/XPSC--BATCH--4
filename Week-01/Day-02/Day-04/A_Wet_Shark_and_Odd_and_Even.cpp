#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int a[n];
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a,a+n);
    if (sum % 2 == 0)
    {
        cout << sum << endl;
        return 0;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 != 0)
            {
                cout << sum - a[i] << endl;
                return 0;
            }
        }
    }
    cout << 0 << endl;

    return 0;
}