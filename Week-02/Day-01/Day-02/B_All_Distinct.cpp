#include<bits/stdc++.h>
using namespace std;


int main(){

  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    for(auto &i : a){
        cin>> i;
    }
    sort(a,a+n);
    int i =0,j=1;
    int cnt =0;
    while(j<n){
        if(a[i]==a[j]){
            cnt++;
            j++;
        }else{
            i=j;
            j++;
        }
    }
  //  cout<<cnt<<endl;
    int ans = (n-cnt)-(cnt%2);
    cout<<ans<<endl;
    
    
      }



    return 0;
}