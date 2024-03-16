#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b, c;
    cin >> a >> b >> c;
    int k = -1;
    for (int i = a; i <= b; i++)
    {
      if(i%c==0){
        k=i;
        break;
      }
    }
    cout << k << endl;

    return 0;
}