#include <bits/stdc++.h>
using namespace std;

bool sub_array(vector<int> &a)
{
    bool flag = true;
    int l = 0, r = a.size() - 1;
    while (l < r)
    {
        if (a[l] != a[r])
        {

            flag = false;
            break;
        }
        l++;
        r--;
    }
    return flag;
}
bool is_kalindrom(int a[], int n)
{
    int l_sub, r_sub;
    bool flag = true;
    int l = 0, r = n - 1;
    while (l < r)
    {
        if (a[l] != a[r])
        {
            l_sub = l;
            r_sub = r;
            flag = false;
            break;
        }
        l++;
        r--;
    }
    if (flag)
    {
        return true;
    }
    else
    {

        vector<int> v1, v2;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != a[l_sub]){

            v1.push_back(a[i]);
            }
           
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] != a[r_sub]){

            v2.push_back(a[i]);
            }
                
        }
        int ans1 = sub_array(v1);
        int ans2 = sub_array(v2);
        return ans1 || ans2;
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (auto &i : a)
        {
            cin >> i;
        }
        if (is_kalindrom(a, n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}