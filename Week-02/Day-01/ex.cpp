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
        vector<int> v(n);
        vector<int> v1(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<string> st(n);
        for (int i = 0; i < n; i++)
        {
            int len;
            cin >> len;
            string k;
            for (int j = 0; j < len; j++)
            {
                char c;
                cin >> c;
                k += c;
            }
            st[i] = k;
        }
        for (int i = 0; i < n; i++)
        { 
            for (char x : st[i])
            {
                if (x == 'D')
                {
                    v[i]++;
                   if(v[i]==10){
                    v[i]=0;
                   } 
                  
                }
                if (x == 'U')
                {
                   v[i]--;
                   if(v[i]==-1){
                    v[i]=9;
                   } 
                }
            }
        }
        for (int x : v)
        {
            cout << x << " ";
        }
        cout<<endl;
    }


    return 0;
}