#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    
    int cur[m];
    for(int l=0;l<n;l++){
        cin>>a[l];
    }
    for(int l=0;l<m;l++){
        cin>>b[l];
    }
    int i = 0, j = 0;
    int ans = 0;
    while (j < m)
    {
        while(i<n && a[i]<b[j]){
            ans++;
            i++;
        }
        cur[j]=ans;
        j++;

       
    }
     for(int l=0;l<m;l++){
        cout<<cur[l]<<" ";
    }
    
  

    return 0;
}