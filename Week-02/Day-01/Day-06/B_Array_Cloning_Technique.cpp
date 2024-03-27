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
        int a[n];
        for (auto &i : a)
        {
            cin >> i;
        }
        sort(a,a+n);
        int cnt = 1,swp=0,clone=0;
        int mx = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] != a[i - 1])
            {
                mx = max(cnt, mx);
                cnt=1;
            }
            else
            {
                cnt++;
            }
        }
        mx = max(cnt,mx);
        swp =n-mx;
        
        int sum = swp;
        while(sum>0){
          clone++;
          sum-=mx;
          mx = 2ll*mx;
        }
        int ans = swp+clone;
        cout<<ans<<endl;
        

    }

    return 0;
}