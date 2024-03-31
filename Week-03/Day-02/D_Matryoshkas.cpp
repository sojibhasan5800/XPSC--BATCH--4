#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        //sort(a, a + n, greater<int>());
        sort(a,a+n);
        reverse(a,a+n);
        vector<pair<ll, ll>> v;

        for (int i = 0; i < n;)
        {
            int j = i;
            while (i < n && a[j] == a[i])
            {
                i++;
            }
            int x =i-j;
            v.push_back({a[j], x});
        }

        ans = v[0].second;
        for (int i = 1; i < v.size(); i++)
        {
            if (v[i].first + 1 == v[i - 1].first)
            {
                ans =ans+ max((v[i].second - v[i - 1].second), 0ll);
               
            }else{
                ans+=v[i].second;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}