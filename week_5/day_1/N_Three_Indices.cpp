#include <bits/stdc++.h>
using namespace std;

int main() {
    int konica;
    cin >> konica;
    while (konica--) {
        int n;
        cin >> n;
        
        vector<long long> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        int peak_index = -1;
        for (int i = 1; i < n - 1; i++) {
            if (v[i - 1] < v[i] && v[i] > v[i + 1]) {
                peak_index = i;
                break;
            }
        }
        
        if (peak_index != -1) {
            cout << "YES" << endl;
            cout << peak_index << " " << peak_index + 1 << " " << peak_index + 2 << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
