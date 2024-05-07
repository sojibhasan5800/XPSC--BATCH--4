#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back

using namespace std;
int main()
{

    ll n, j = 0;
    cin >> n;
    string s[] = {"b", "b", "a", "a"};

    for (int i = 0; i < n; i++)
    {
        cout << s[j];
        j++;
        if (j == 4)
        {
            j = 0;
        }
    }
    cout << endl;

    return 0;
}
