#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
          int n , q;
          cin >> n >> q;
          vector<int> a(n) , b(q);

          for(int i = 0; i < n; i++)
          {
            cin >> a[i];
          }

          for(int i = 0; i < q; i++)
          {
            cin >> b[i];
            if(b.empty()||b.back()>q)
            b.push_back(q);
          }

          for(int i = 0; i < n; i++)
          {
             for(int j = 0; j < q; j++)
             {
               if(a[i] % (1 << b[j]) == 0)
               
                  a[i] += 1<<(b[j] - 1);
               
             }
          }

          for(int i = 0; i < n; i++)
          {
            cout << a[i] << ' ';
          }
          cout << '\n';
          
    }

}
