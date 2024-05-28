#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template<typename T> using pbds = tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;

int main(){

ios::sync_with_stdio(false);
cin.tie(NULL);
int a,b;
cin>>a>>b;
pbds<int>pb;
for(int i=0;i<a;i++){
    int x;
    cin>>x;
    pb.insert(x);
}
for(int i=0;i<b;i++){
    int x;
    cin>>x;
   cout<<pb.order_of_key(x+1)<<" ";
}
  



    return 0;
}