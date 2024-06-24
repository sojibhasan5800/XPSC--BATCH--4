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
        int file, n, m;
        cin >> file >> n >> m;
        vector<int> v1(n), v2(m), ans;
        int cnt = 0;

        for (auto &i : v1)
        {
            cin >> i;
        }
        for (auto &i : v2)
        {
            cin >> i;
        }
        int idx1 = 0, idx2 = 0;
        while (idx1 < n || idx2 < m)
        {
            bool flag = false;

            if (idx1 < n && v1[idx1] == 0)
            {
                ans.push_back(v1[idx1]);
                idx1++;
                file++;
                flag = true;
            }
            if (idx2 < m && v2[idx2] == 0)
            {

                ans.push_back(v2[idx2]);
                idx2++;
                file++;
                flag = true;
            }
            if (idx1 < n && v1[idx1] != 0 && v1[idx1] <= file)
            {
                ans.push_back(v1[idx1]);
                idx1++;
                flag = true;
            }
            if (idx2 < m && v2[idx2] != 0 && v2[idx2] <= file)
            {
                ans.push_back(v2[idx2]);
                idx2++;
                flag = true;
            }
            if (flag == false)
            {
                cnt = -1;
                break;
            }
        }
        if (cnt == -1)
        {
            cout << cnt << endl;
        }
        else
        {
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i] << " ";
            }
            cout<<endl;
        }
    }
    return 0;
}