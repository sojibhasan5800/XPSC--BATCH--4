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
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            v.push_back({x, y});
        }
        bool flag = true;
        for (int i = 1; i < n; i++)
        {
            if(v[i].second>=v[0].second && v[i].first>=v[0].first){
                flag=false;
            }
        }
        if(flag)cout<<v[0].first<<endl;
        else cout<<-1<<endl;
    }

    return 0;
}