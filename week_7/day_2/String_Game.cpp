#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool flag = true;
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<char> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back(s[i]);
        }
        int i = 0, z = 1;
        while (v.size() > 1)
        {
            if (v[i] != v[i + 1])
            {
                z = i + 1;
                v.erase(v.begin() + i, v.begin() + z + 1);
                if (flag)
                    flag = false;
                else
                    flag = true;
            }
            else
            {

                break;
            }
        }

        if (!flag)
            cout << "Zlatan" << endl;
        else
            cout << "Ramos" << endl;
    }
}