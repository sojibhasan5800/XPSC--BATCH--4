#include<bits/stdc++.h>
using namespace std;


int main(){

  int n,m;
  cin>>n>>m;
  int a[n],b[m];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<m;i++){
    cin>>b[i];
  }
  int ci=0,cj=0;
  int ans=0;
  while(cj<m){
   while(ci<n && a[ci]<b[cj]){
    ans++;
    ci++;
   }
   cout<<ans<<" ";
   cj++;
  }



    return 0;
}