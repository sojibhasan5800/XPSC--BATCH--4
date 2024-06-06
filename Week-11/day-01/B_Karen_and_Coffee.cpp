#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> prefix(200000 + 5), ans(200000 + 5);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        prefix[a]++;
        prefix[b + 1]--;
    }
    for (int i = 1; i <= prefix.size(); i++)
    {
        prefix[i] = prefix[i - 1] + prefix[i];
    }
    for (int i = 1; i <= ans.size(); i++)
    {
        if (prefix[i] >= k)
        {
            ans[i] = 1;
        }
        else
        {
            ans[i] = 0;
        }
    }
    for (int i = 1; i <= ans.size(); i++)
    {
        ans[i] = ans[i - 1] + ans[i];
    }

    while (q--)
    {
        int x, y;
        cin >> x >> y;
        cout << ans[y] - ans[x - 1] << endl;
    }

    return 0;
}