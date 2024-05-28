#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define nextline endl
using namespace __gnu_pbds;
using namespace std;
template<typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string s;
    cin >> s;
    string r = s;
    reverse(r.begin(), r.end());
    map<char, vector<int>> pos_s, pos_r;
    for (int i = 0; i < n; i++)
    {
        pos_s[s[i]].push_back(i);
        pos_r[r[i]].push_back(i);
    }
    
    vector<int> per(n);
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        for (int i = 0; i < pos_s[ch].size(); i++)
        {
            per[pos_r[ch][i]] = pos_s[ch][i];
        }
    }
    long long cnt = 0;
    pbds<int> pb;
   for(int i=n-1;i>=0;i--){
     pb.insert(per[i]);
        cnt+=pb.order_of_key(per[i]);
   }
    cout<<cnt<<endl;

    return 0;
}