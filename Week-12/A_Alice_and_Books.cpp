#include <bits/stdc++.h>
#define ll long long int
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
        int ans = 0;
        vector<int> v(n), pre(n + 1);
        for (int i = 0; i <n; i++)
        {
            cin >> v[i];
        }
        int pageA = v[n-1];
        int pageB = *max_element(v.begin(),v.end()-1);
        cout<<pageA+pageB<<endl;
/* 
 

        sort(v.begin(), v.end());

        for (int i = 1; i <= n; i++)
        {
            pre[i] = pre[i - 1] + v[i];
        }
        if (n % 2 == 0)
        {
            int x = ceil(n / 2);
            int pageA = pre[x] / x;

            int pageB = (pre[n] - pre[x]) / x;
            cout << pageA + pageB << endl;
        }
        else
        {
            double x = ceil(n / 2);
            double pageA = ceil(ceil(pre[x]) / x);

            int pageB = ceil((pre[n] - pre[x]) / x - 1);
            cout << pageA + pageB << endl;
        } */
    }

    return 0;
}