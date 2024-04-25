#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n;
        long long m;
        cin>>n>>m;
        vector<int>a(n);
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin>>a[i];
            a[i]+=(i+1);
        }
        sort(a.begin(),a.end());
        int ans=0;
        long long sum=0;
        for (int i = 0; i < n; i++)
        {
            /* code */
            if(sum+a[i]>m)
            break;
            sum+=a[i];
            ans++;

        }
        cout<<ans<<endl;
    }
    
    return 0;
}