#include <bits/stdc++.h>
using namespace std;
const int mx = 1 << 15;
vector<int> palindromes;
void palindrome_digit_make()
{

    for (int i = 0; i < mx; i++)
    {
        string s = to_string(i);
        string s_rev = s;
        reverse(s.begin(), s.end());
        if (s == s_rev)
        {
            palindromes.push_back(i);
        }
    }
}
void solve()
{
  

     int n;
        cin >> n;
        vector<int> cnt(mx), a;
        for (int i = 0;i < n;i++) {
            int x;
            cin >> x;
            cnt[x]++;
            a.push_back(x);
        }

        long long ans = n;

        for (int i = 0;i < n;i++) {
            for (int j = 0;j < palindromes.size();j++) {
                int curr = (a[i] ^ palindromes[j]);
                ans += cnt[curr];
            }
        }

        cout << (ans / 2) << '\n';
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    palindrome_digit_make();
    while (t--)
    {

        solve();
    }

    return 0;
}