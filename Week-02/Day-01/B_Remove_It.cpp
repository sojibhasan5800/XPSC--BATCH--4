#include<bits/stdc++.h>
using namespace std;


int main(){

  int n,s;
  cin>>n>>s;
  list<int>l;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    l.push_back(x);
  }
  l.remove(s);
  if(!l.empty()){
    for(auto it = l.begin(); it!=l.end();it++){
          cout<<*it<<" ";
    }
  }else{
    cout<<" ";
  }



    return 0;
}