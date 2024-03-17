#include <bits/stdc++.h>
using namespace std;

int main()
{

    string txt, pat;
    cin >> txt >> pat;
    int k = pat.size();
    int n = txt.size();
    int r = 0, l = 0;
    int fre_txt[26] = {0};
    int fre_pat[26] = {0};
    for (char c : pat)
    {
        int val = c - 'a';
        fre_pat[val]++;
    }

    int cnt = 0;
    while (r < n)
    {
        if ((r - l + 1) == k)
        {
            int value = txt[r] - 'a';
            fre_txt[value]++;

            if (equal(begin(fre_txt), end(fre_txt), begin(fre_pat), end(fre_pat)))

            {

                cnt++;
            }
            int val = txt[l] - 'a';
            fre_txt[val]--;
            l++;
            r++;
        }
        else
        {
            int val = txt[r] - 'a';
            fre_txt[val]++;
            r++;
        }
    }
    cout << cnt << endl;

    return 0;
}