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
        string s;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            s += c;
        }
        stack<char> st;
        for (char c : s)
        {
            if (!st.empty())
            {
                if (st.top() == '(' && c == ')')
                {
                    st.pop();
                }
                else
                {
                    st.push(c);
                }
            }
            else
            {
                st.push(c);
            }
        }
        int ans = st.size() / 2;
        cout << ans << endl;
    }

    return 0;
}