#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n ;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    sort(v.begin(),v.end());
    cin>>k;
    while (k--)
    {
       int l,r;
       cin>>l>>r;
       auto it_left=lower_bound(v.begin(),v.end(),l);
       auto it_right=upper_bound(v.begin(),v.end(),r);
       cout<<it_right-it_left<<" ";
    }

    return 0;
}