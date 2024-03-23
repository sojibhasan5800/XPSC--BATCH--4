#include<bits/stdc++.h>
using namespace std;
vector<string>ans;
void string_per(string s, int idx){
  if(idx>=s.size()){
    ans.push_back(s);
  }
  for(int i=idx;i<s.size();i++){
    swap(s[i],s[idx]);
    string_per(s,idx+1);
    swap(s[i],s[idx]);
  }
}

int main(){

  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s={"Timur"};
    string name;
    cin>>name;
    string_per(s,0);
    auto it = find(ans.begin(),ans.end(),name);
    if(it!=ans.end()){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }
  }



    return 0;
}