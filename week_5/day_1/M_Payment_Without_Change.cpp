#include <bits/stdc++.h>
using namespace std;
int main()
{
    int konica;
    cin >> konica;
    while (konica--)
    {
        /* code */
        int n, a, b, fixed;
        cin >> n >> a >> b >> fixed;
        if (fixed % b <= a and 1LL * n * b + a >= fixed)
        {
            cout << "YES" << endl;
        }
        else
        {

            cout << "NO" << endl;
        }
    }

    return 0;
}