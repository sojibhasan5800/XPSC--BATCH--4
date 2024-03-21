#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, k;
    cin >> n;
    int a[n];
   for(int &i: a){
    cin>>i;
   }
   
    
      cin >> k;
      deque<long long int> dq;
      vector<long long> v;
      for (int i = 0; i < k; i++)
      {
          while (!dq.empty() && a[dq.front()] >= 0)
          {
              dq.pop_front();
          }
          dq.push_back(i);
      }
      if(a[dq.front()]<=0){
            v.push_back(a[dq.front()]);
          }else{
            v.push_back(0);
          }
     
      for (int i = k; i < n; i++)
      {
          if (dq.front() == i - k)
          {
              dq.pop_front();
          }
          while (!dq.empty() && a[dq.front()] >=0)
          {
              dq.pop_front();
          }
          dq.push_back(i);
          if(a[dq.front()]<=0){
            v.push_back(a[dq.front()]);
          }else{
            v.push_back(0);
          }
        
      }
      for(int x : v){
          cout<<x<<" ";
      }
 
    return 0;
}