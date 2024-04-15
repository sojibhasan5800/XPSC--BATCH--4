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
        int pw = 1;
        while (pw*2 <= n)
        {
            pw *= 2;
        }
        cout << pw - 1 << endl;
    }

    return 0;
}