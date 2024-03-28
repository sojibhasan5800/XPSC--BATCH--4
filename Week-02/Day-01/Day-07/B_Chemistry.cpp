#include<bits/stdc++.h>
using namespace std;


int main(){

  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int cnt =0;
    map<char,int>mp;
    for(char c: s){
        mp[c]++;
    }
    for(pair<char,int>x : mp){
        if(x.second%2!=0)cnt++;
    }
    if(cnt-1<0)cnt=0;
    else cnt-=1;
    if(k>=cnt && k<=n){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

  }



    return 0;
}