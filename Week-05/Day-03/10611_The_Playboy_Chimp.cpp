#include<bits/stdc++.h>
using namespace std;


int main(){

ios::sync_with_stdio(false);
cin.tie(NULL);
  int n,q;
  cin>>n;
   vector<int>v(n);
  for(auto &i: v){
    cin>>i;
  }
  sort(v.begin(),v.end());
  cin>>q;
  while(q--){
    int x;
    cin>>x;
    auto lo = lower_bound(v.begin(),v.end(),x);
    auto up = upper_bound(v.begin(),v.end(),x);
    int lower = lo-v.begin();
    int upper= up-v.begin();
    if(lower==0){
        cout<<"X ";
    }else{
        cout<<v[lower-1]<<" ";
    }
    if(upper==n){
        cout<<"X "<<endl;
    }else{
        cout<<v[upper]<<endl;
    }


  }




    return 0;
}