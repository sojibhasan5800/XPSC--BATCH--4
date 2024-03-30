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
        int mat[n + 2][n + 2];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <n; j++)
            {
                cin >> mat[i][j];
            }
        }
        map<int, int> mp;
        map<int, int> m;
        for (int i = 1; i <= n; i++)
        {
            mp[mat[i][n - 1]] = i;
            m[mat[i][n - 1]]++;
        }
        int idx = 0, value;
        for (pair<int, int> x : m)
        {
            if (x.second == 1)
                idx = x.first;
            else
                value = x.first;
        }
        for (int i = 1; i < n; i++)
        {
            cout << mat[mp[idx]][i] << " ";
        }
        cout << value << endl;
    }

    return 0;
}