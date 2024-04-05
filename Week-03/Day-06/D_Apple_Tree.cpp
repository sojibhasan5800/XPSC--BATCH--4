#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 * 2 + 1;
vector<vector<int>> adj;
vector<int> value;
int dfs(int a, int from)
{
    int cnt = 0;
    for (int child : adj[a])
    {
        if (child != from)
        {
            cnt += dfs(child, a);
        }
    }
    if (cnt == 0 && adj[a].size() == 1)
    {
        cnt++;
    }
    value[a] = cnt;
    return cnt;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        adj.resize(n + 1);
        value.resize(n + 1, 0);
        for (int i = 0; i < n - 1; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs(1, 1);
        int q;
        cin >> q;
        while (q--)
        {
            int u, v;
            cin >> u >> v;
            long long int ans = ((long long)value[u] * (long long)value[v]);

            cout << ans << endl;
        }
        adj.clear();
        value.clear();
    }

    return 0;
}