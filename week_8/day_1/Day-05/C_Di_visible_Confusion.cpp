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
        vector<int> v(n);
        for (int &i : v)
        {
            cin >> i;
        }
        bool ans = true;
        for (int i = 0; i < n; i++)
        {   
            bool found = false;
            for (int j = 2; j <= i + 2; j++)
            {
                if(v[i]%j!=0){
                   found=true;
                   break;
                }
            }
            ans&=found;
           
        }
        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}