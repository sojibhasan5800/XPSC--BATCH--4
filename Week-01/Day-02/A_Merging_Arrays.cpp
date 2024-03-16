#include <bits/stdc++.h>
using namespace std;
void merge(int a[], int b[], int mer[], int n, int m)
{
    int i = 0, j = 0;
    int cur = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            mer[cur] = a[i];
            i++;
            cur++;
        }
        else
        {
            mer[cur] = b[j];
            j++;
            cur++;
        }
    }
    while (i < n)
    {
        mer[cur] = a[i];
        i++;
        cur++;
    }
    while (j < m)
    {
        mer[cur] = b[j];
        j++;
        cur++;
    }
}

int main()
{

    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    int mer[n + m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    merge(a, b, mer, n, m);
    for(int i=0;i<(n+m);i++){
        cout<<mer[i]<<" ";
    }

    return 0;
}