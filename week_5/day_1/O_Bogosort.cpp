#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nasima;
    cin>>nasima;
    while (nasima--)
    {
        /* code */
        int n;
        cin>>n;
        vector<int>a(n);
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin>>a[i];
        }
        sort(a.begin(),a.end(),greater<int>());
        for(auto el:a)
        
        cout<<el<<" ";
        cout<<endl;
        
    }
    
    return 0;
}


// #include<bits/stdc++.h>
// #define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
// #define ll long long 
// #define endl '\n'
// using namespace std;
// int main(){
//     fst
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for(int i=0;i<n;i++){
//             cin >> a[i];
//         }
//         sort(a.begin(),a.end(),greater<int>());
//         for(int x : a){
//             cout << x << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }






