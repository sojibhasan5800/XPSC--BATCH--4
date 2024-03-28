#include <bits/stdc++.h>
using namespace std;

int main()
{

    int k;
    string s;

    cin >> s >> k;
    int i = 0, j = 0;
    map<char, int> mp;
    int mx = 0;
    while (j < s.size())
    {
        mp[s[j]]++;
        if (mp.size() < k)
        {
            j++;
        }
        else if (mp.size() == k)
        {
            mx = max(mx, j - i + 1);
            j++;
         
           
        }
        else if (mp.size() > k)
        {
            while (mp.size() > k)
            {
                mp[s[i]]--;
                if (mp[s[i]] == 0)
                {
                    mp.erase(s[i]);
                }
                i++;
            }
            j++;
        }
        
    }
    if(mx==0){
        cout<<-1<<endl;
    }else{
        cout<<mx<<endl;
    }

    return 0;
}