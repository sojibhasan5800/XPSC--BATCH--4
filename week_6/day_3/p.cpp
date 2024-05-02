#include<bits/stdc++.h>
using namespace std;

  bool ok(int n,int t,int x,int y){
if(t<min(x,y))
return false;
int cnt=1;
t-=min(x,y);
cnt+=t/t+1/y;
return cnt>=n;

  }