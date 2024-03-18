#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b, t;
    cin >> a >> b >> t;
    int ans = 0;
    int k =a;
    while (a <= t)
    {
        ans += b; 
        a += k;
    }
    cout<<ans<<endl;

    return 0;
}