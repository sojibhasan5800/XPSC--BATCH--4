#include<bits/stdc++.h>
using namespace std;


int main(){

ios::sync_with_stdio(false);
cin.tie(NULL);
  int n,q;
  cin>>n>>q;
   vector<int>v(n);
  for(auto &i: v){
    cin>>i;
  }
  sort(v.begin(),v.end());
  while(q--){
    int x;
    cin>>x;
      int l=0,r=n-1;
      bool flag=false;
      int idx;
      while(l<=r){
        int mid = (l+r)/2;
        if(x==v[mid]){
            flag=true;
            idx=mid;
            break;
        }else if(x>v[mid]){
            l=mid+1;
        }else{
            r = mid-1;
        }
      }
      if(flag)cout<<x<<" found at "<<idx<<endl;
      else cout<<x<<" not found"<<endl;
  }



    return 0;
}