#include<bits/stdc++.h>
using namespace std;


int main(){

ios::sync_with_stdio(false);
cin.tie(NULL);
  
    int n,q;
    cin>>n;
    vector<int>v(n);
    for(auto &i : v){
        cin>>i;
    }
   sort(v.begin(),v.end());
   cin>>q;
    while(q--){
       int x;
       cin>>x;
      auto it = upper_bound(v.begin(),v.end(),x);
      cout<<(it-v.begin())<<endl;



    }
  



    return 0;
}