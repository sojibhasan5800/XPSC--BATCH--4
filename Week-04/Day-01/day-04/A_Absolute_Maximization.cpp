#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(auto &i : a){
        cin>>i;
    }
    int mx=a[0],mn=a[0];
    for(int i=1;i<n;i++){
        mx|=a[i];
        mn&=a[i];
    }
    cout<<mx-mn<<endl;
}

int main(){

ios::sync_with_stdio(false);
cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    solve();
  }



    return 0;
}