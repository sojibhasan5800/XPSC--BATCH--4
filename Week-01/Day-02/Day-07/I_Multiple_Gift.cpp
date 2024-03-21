#include<bits/stdc++.h>
using namespace std;


int main(){
long long int x,y;
cin>>x>>y;
long long int ans =x;
long long int cnt =0;
while(ans<=y){
  ans*=2;
  cnt++;
}
cout<<cnt<<endl;
  



    return 0;
}