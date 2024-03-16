#include <bits/stdc++.h>
using namespace std;

int main()
{

    string name;
    cin >> name;
    int a[26] = {0};
    //sort(name.begin(), name.end());
    //int n = name.size() - 1;
    for (char c : name)
    {
        int val = c - 'a';
        a[val]++;
    }

    //int sz = name[n] - 'a';
    bool flag = true;
    for (int i = 0; i <26; i++)
    {
        if (a[i] == 0)
        {
            cout << char(i + 'a') << endl;
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "None" << endl;

    return 0;
}