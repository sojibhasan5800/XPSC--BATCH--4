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
        set<int> s;
        int a[n];
        s.clear();
        int cnt = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for (int i = n-1; i>=0; i--)
        {
           
            s.insert(a[i]);
            cnt++;
            if (s.size() < cnt)
            {
                break;
            }
        }
        int ans = n - s.size();
        cout << ans << endl;
    }

    return 0;
}