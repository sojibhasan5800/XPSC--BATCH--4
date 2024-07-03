#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define ll long long int
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
         deque<char>dq;
        for(char c : s){
           dq.push_back(c);
        }
        while(dq.size()>0 && dq.front()=='W'){
            dq.pop_front();
        }
        while(dq.size()>0 && dq.back()=='W'){
            dq.pop_back();
        }
        cout<<dq.size()<<endl;




     /*    int l = 0, r = n - 1;
        while (l <= r)
        {
            if (s[l] == 'B' && s[r] == 'B')
                break;
            if (s[l] == 'B' && s[r] != 'B')
                r--;
            if (s[l] != 'B' && s[r] == 'B')
                l++;
            if (s[l] != 'B' && s[r] != 'B')
            {
                l++;
                r--;
            }
        }
        cout <<r-l + 1 << endl; */
    }

    return 0;
}