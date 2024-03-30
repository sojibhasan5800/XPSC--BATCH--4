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
        string s = {"meow"};
        string s2 = {"MEOW"};
        string cat;
        cin >> cat;
        int i = 0, r = 0;
        bool flag = true;
        while (r < n)
        {
            if (s[i] == cat[r] || s2[i] == cat[r])
            {
                r++;
                while (r < n &&( s[i] == cat[r] || s2[i]==cat[r]))
                {
                    r++;
                }
            }
            else
            {
                flag = false;
                break;
            }
            i++;
        }
        if(flag && i==4)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}