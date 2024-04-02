#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int mat[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }

        ll mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                ll sum = 0;
                sum += mat[i][j];
                ll temp_i = i - 1;
                ll temp_j = j - 1;
                while (temp_i >= 0 && temp_j >= 0)
                {
                    sum += mat[temp_i][temp_j];
                    temp_i--;
                    temp_j--;
                }
                temp_i = i - 1;
                temp_j = j + 1;
                while (temp_i >= 0 && temp_j < m)
                {
                    sum += mat[temp_i][temp_j];
                    temp_i--;
                    temp_j++;
                }
                temp_i = i + 1;
                temp_j = j - 1;
                while (temp_i < n && temp_j >= 0)
                {
                    sum += mat[temp_i][temp_j];
                    temp_i++;
                    temp_j--;
                }
                temp_i = i + 1;
                temp_j = j + 1;
                while (temp_i < n && temp_j < m)
                {
                    sum += mat[temp_i][temp_j];
                    temp_i++;
                    temp_j++;
                }
                mx = max(sum, mx);
            }
        }
        cout << mx << endl;
    }

    return 0;
}