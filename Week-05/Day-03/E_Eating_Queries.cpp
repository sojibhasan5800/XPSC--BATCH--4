#include<bits/stdc++.h>
using namespace std;


int main(){

ios::sync_with_stdio(false);
cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    int n,q;
    cin>>n>>q;
    int a[n];
    for(auto &i : a){
        cin>>i;
    }
    sort(a,a+n,greater<>());
    vector<int>pre(n);
    pre[0]=a[0];
    for(int i=1;i<n;i++){
        pre[i]=a[i]+pre[i-1];
    }
    while(q--){
       int x;
       cin>>x;
       if(x>pre[n-1]){
        cout<<-1<<endl;
        continue;
       }
       int ans =1;
     auto it = lower_bound(pre.begin(),pre.end(),x);
     cout<<(it-pre.begin())+1<<endl;


    }
  }



    return 0;
}