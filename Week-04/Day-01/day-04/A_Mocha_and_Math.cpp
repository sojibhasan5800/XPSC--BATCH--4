#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(auto &i : a){
        cin>>i;
    }
    int ans = a[0];
    for(int i=1;i<n;i++){
        ans&=a[i];
    }
    cout<<ans<<endl;
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