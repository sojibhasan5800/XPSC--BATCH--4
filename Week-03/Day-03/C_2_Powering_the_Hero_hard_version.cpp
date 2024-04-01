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
        for(int &i: a){
            cin>>i;
        }
        long long int ans = 0;
        priority_queue<int> pq;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                if (!pq.empty())
                {
                    ans += pq.top();
                    pq.pop();
                }
            }
            else
            {
                pq.push(a[i]);
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}