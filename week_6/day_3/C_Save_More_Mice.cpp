#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst
    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        vector<ll> a(k);
        for(ll i=0;i<k;i++) cin >> a[i];
        vector<ll> v(k);
        for(ll i=0;i<k;i++){
            v[i] = n - a[i];
        }
        sort(v.begin(),v.end());
        ll sum = 0,idx = 0;
        bool ok = true;
        for(ll i=0;i<k;i++){
            sum += v[i];
            idx = i + 1;
            if(sum >= n){
                ok = false;
                break;
            }
        }
        if(!ok) idx--;
        cout << idx << endl;
    }
    return 0;
}