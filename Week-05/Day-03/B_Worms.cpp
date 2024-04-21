#include<bits/stdc++.h>
using namespace std;


int main(){

ios::sync_with_stdio(false);
cin.tie(NULL);
  int n;
  cin>>n;
  vector<int>v(n);
  for(auto &i: v){
    cin>>i;
  }
  
  vector<int>pre(n);
  pre[0]=v[0];
  for(int i=1;i<n;i++){
    pre[i]=pre[i-1]+v[i];
  }
  int q;
  cin>>q;
  while(q--){
    int x;
    cin>>x;
    auto it = lower_bound(pre.begin(),pre.end(),x);
    cout<<(it-pre.begin())+1<<endl;
  }




    return 0;
}