
#include <iostream>
using namespace std;

int main()
{

    int s, t;
    cin >> s >> t;

    long long int sum = 0;
    long long int mul = 0;
    int cnt = 0;
    for (int i = 0; i <= s; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            for (int k = 0; k <= s; k++)
            {
                sum = i + j + k;
                mul = i * j * k;
                if (sum <= s && mul <= t)
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;

    return 0;
}