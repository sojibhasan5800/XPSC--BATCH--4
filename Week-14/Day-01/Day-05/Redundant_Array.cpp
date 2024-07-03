#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>v(n);
	    for(auto & i: v){
	        cin>>i;
	    }
	    int x = *min_element(v.begin(),v.end());
	    int cnt =0;
	    for(int y : v){
	        if(y!=x)cnt++;
	    }
        ll ans = 1ll*cnt*x;
	    cout<<ans<<endl;
	    
	}

}
