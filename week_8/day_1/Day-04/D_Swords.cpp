#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve(){
    int n,mx=0;
    cin>>n;
    vector<int>v(n);
    for(int &i : v){
        cin>>i;
        if(mx<i){
            mx=i;
        }
    }
    ll sum=0,g=0;
    for(int i=0;i<n;i++){
        if(mx==v[i])continue;
        sum+=mx-v[i];
        g=__gcd(g,(ll)(mx-v[i]));
    }
    cout<<(sum/g)<<" "<<g<<endl;
    
    

  
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}