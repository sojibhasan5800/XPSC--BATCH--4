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
    vector<int>v(n);
    for(auto &i :v){
        cin>>i;
    }
    int cnt =0;
    vector<pair<int,int>>operation;
    if(n%2==0){
        cnt=2;
        operation.push_back({1,n});
        operation.push_back({1,n});
    }else{
        cnt=4;
        operation.push_back({1,n-1});
        operation.push_back({1,n-1});
        operation.push_back({n-1,n});
        operation.push_back({n-1,n});
    }
    cout<<cnt<<endl;
    for(auto x : operation){
        cout<<x.first<<" "<<x.second<<endl;
    }
}



    return 0;
}