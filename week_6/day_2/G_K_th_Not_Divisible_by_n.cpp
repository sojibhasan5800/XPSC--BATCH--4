#include <bits/stdc++.h>
using namespace std;
#define  ll long long 

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        ll l = 1, r = 1e18, ans = -1; 
        
        while (l <= r) {
            ll mid = l + (r - l) / 2;
            
            ll cnt = mid / n;
            
            ll nonDivisible = mid - cnt;
            
            if (nonDivisible == k) {
                ans = mid;
                r = mid - 1;
            }
            else if (nonDivisible > k) {
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }
        
        cout << ans << endl;
    }
    return 0;
}
