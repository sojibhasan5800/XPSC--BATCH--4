#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void box()
{
    int n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    priority_queue<ll> pq;
    pq.push(arr[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        if (pq.top() >= arr[i])
        {
            ll x = pq.top() ^ arr[i];
            pq.pop();
            pq.push(x);
        }
        else
        {
            pq.push(arr[i]);
        }
    }
    cout << pq.size() << endl;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        box();
    }

    return 0;
}