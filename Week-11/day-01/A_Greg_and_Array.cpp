#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(NULL);
  ll n, m, k;
  cin >> n >> m >> k;
  vector<ll> arr(n + 1);
  for (int i = 1; i <= n; i++)
  {
    cin >> arr[i];
  }

  vector<vector<ll>> vv;
  for (int i = 0; i < m; i++)
  {
    vector<ll> x;
    for (int i = 0; i < 3; i++)
    {
      int y;
      cin >> y;
      x.push_back(y);
    }
    vv.push_back(x);
  }
  vector<ll> pre(m + 2),after_pre(n+2);
  while (k--)
  {
    int x, y;
    cin >> x >> y;
    pre[x]++;
    pre[y + 1]--;
  }
  for (int i = 1; i < (m + 2); i++)
  {
    pre[i] = pre[i - 1] + pre[i];
  }
  
  
  for (int i = 0; i <m; i++)
  {
   vector<ll>tmp=vv[i];
   int l = tmp[0];
   int r = tmp[1];
   int val = tmp[2];
   after_pre[l]+=(val*pre[i+1]);
   after_pre[r+1]-=(val*pre[i+1]);
  }
  for (int i = 1; i < (n + 2); i++)
  {
    after_pre[i] = after_pre[i - 1] +after_pre[i];
  }
   

 for(int i=1;i<=n;i++){
  cout<<arr[i]+after_pre[i]<<" ";
 } 

 

  return 0;
}