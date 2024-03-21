#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, k;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    /*
      cin >> k;
      deque<long long int> dq;
      vector<long long> v;
      for (int i = 0; i < k; i++)
      {
          while (!dq.empty() && a[dq.front()] >= a[i])
          {
              dq.pop_front();
          }
          dq.push_back(i);
      }
      v.push_back(a[dq.front()]);
      for (int i = k; i < n; i++)
      {
          if (dq.front() == i - k)
          {
              dq.pop_front();
          }
          while (!dq.empty() && a[dq.front()] >= a[i])
          {
              dq.pop_front();
          }
          dq.push_back(i);
          v.push_back(a[dq.front()]);
      }
      for(int x : a){
          cout<<x<<" ";
      }
  */
    return 0;
}