#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &i : v)
        {
            cin >> i;
        }
        int end = n;
        bool flag = true;
        sort(v.begin(), v.end(), greater<>());
      
        for (int i = 0; i < n; i++)
        {
            if (end - v[i] < 0)
            {
                flag = false;
            }
            end--;
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
