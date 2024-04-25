// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main()
// {
//     ll t, res, ans;
//     while (t--)
//     {
//         /* code */
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++)
//         {
//             /* code */
//             cin >> a[i];
//         }
//         ll pos = 0;
//         for (int i = 0; i < n; i++)
//         {
//             /* code */
//             if (a[i] < 0)
//             {
//                 if (x > 0)
//                 {

//                     pos = x;
//                     a[i] = 0;
//                 }
//                 else{
                
//                 a[i]=a[i]+pos;
//                 pos=0;
//                 }
//             }
//             else{
            
            
//             pos+=a[i];
//             }
//         }
//         res=0;
//         for (int i = 0; i < n; i++)
//         {
//             /* code */
//             if(a[i]<0)
//             res+=abs(a[i]);
//         }
//         cout<<res<<endl;
//     }

//     return 0;
// }





















#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{

    ll t, n,x,res;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        ll pos = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0)
            {
                x = a[i] + pos;
                if (x > 0)
                {
                    pos = x;
                    a[i] = 0;
                }
                else
                {
                    a[i] = a[i] + pos;
                    pos = 0;
                }
            }
            else
                pos += a[i];
        }
        res = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0)
                res += abs(a[i]);
        }
        cout << res << endl;
    }
}