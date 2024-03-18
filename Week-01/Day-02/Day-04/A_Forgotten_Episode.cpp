#include<bits/stdc++.h>
using namespace std;


int main(){

  int n;
  cin>>n;
 
 int mis_ep=0;
 vector<bool>episode(n+1,false);
for(int i=0;i<n-1;i++){
    int x;
    cin>>x;
    episode[x]=true;
}


for(int i=1;i<=n;i++){
    if(!episode[i]){
        mis_ep=i;
        break;
    }
}
cout<<mis_ep<<endl;



    return 0;
}