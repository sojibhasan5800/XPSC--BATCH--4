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
        string a[3][n];
        map<string, int> word;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                word[a[i][j]]++;
            }
        }

        for (int i = 0; i < 3; i++)
        {
            int cnt = 0;
            for (int j = 0; j < n; j++)
            {
                if (word[a[i][j]] == 2)
                {
                    cnt += 1;
                }
                else if (word[a[i][j]] == 1)
                {
                    cnt += 3;
                }
            }
            cout << cnt << " ";
        }
        cout << endl;
    }

    return 0;
}