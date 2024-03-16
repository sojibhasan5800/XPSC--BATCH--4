#include <bits/stdc++.h>
using namespace std;
string name;
void divisable(int n)
{
    if (n == 0)
        return;
    int mod = n % 10;
    n = n / 10;
    divisable(n);

    name += to_string(mod);
}

int main()
{

    int n;
    cin >> n;
    name.clear();
    divisable(n);
    while(name.size()!=4){
       name.insert(0,1,'0');
    }
    cout<<name<<endl;


    return 0;
}