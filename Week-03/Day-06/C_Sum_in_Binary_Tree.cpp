#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long int sum = 0;
        long long  int idx = n;
        while (idx != 0)
        {
            if (idx % 2 == 0)
            {
                sum += idx;
                idx = idx / 2ll;
            }
            else
            {
                sum += idx;
                idx = (idx - 1) / 2;
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}