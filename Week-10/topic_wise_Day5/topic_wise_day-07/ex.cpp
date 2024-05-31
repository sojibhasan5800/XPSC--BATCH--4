#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

// Define an ordered set
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    vector<long long> greater_before(n, 0), smaller_after(n, 0);
    ordered_set<int> os_before, os_after;

    // Calculate greater_before for each element
    for (int i = 0; i < n; ++i) {
        os_before.insert(a[i]);
        greater_before[i] = os_before.size() - os_before.order_of_key(a[i]) - 1;
    }

    // Calculate smaller_after for each element
    for (int i = n - 1; i >= 0; --i) {
        os_after.insert(a[i]);
        smaller_after[i] = os_after.order_of_key(a[i]);
    }

    long long weakness = 0;

    // Calculate the total number of valid triplets
    for (int j = 0; j < n; ++j) {
        weakness += greater_before[j] * smaller_after[j];
    }

    cout << weakness << "\n";

    return 0;
}
