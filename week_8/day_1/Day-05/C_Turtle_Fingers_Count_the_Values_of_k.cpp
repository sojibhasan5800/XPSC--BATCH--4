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
        ll a, b, l;
        cin >> a >> b >> l;
       
        ll ans = 0;
        ll x = 0;
        if (a == b)
        {
            ll y = 1;
            while (l % b == 0)
            {
                l /= b;
                y++;
            }
            cout << y << "\n";
            continue;
            
        }

        set<int> st;
        while (true)
        {
            if (int(pow(a, x)) > l)
                break;
            if ((l % int(pow(a, x))) != 0)
                break;
            ll curr = l / int(pow(a, x));
            st.insert(curr);
            while (curr % b == 0)
            {
                curr /= b;
                st.insert(curr);
            }
            x++;
        }
        cout << st.size() << "\n";
    }

        return 0;
    }