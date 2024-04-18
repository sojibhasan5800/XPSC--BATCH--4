#include<bits/stdc++.h>
using namespace std;


int main(){

ios::sync_with_stdio(false);
cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    n--;
    int x = log2(n);
    x = pow(2,x);
  int y = n-x;
    for(int i=x;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<y<<" ";
    for(int i=0;i<x;i++){
        if(i==y)continue;
        cout<<i<<" ";
    }
    cout<<endl;
  }



    return 0;
}