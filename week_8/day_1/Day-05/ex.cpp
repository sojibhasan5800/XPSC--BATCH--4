#include<bits/stdc++.h>
using namespace std;
vector<bool> is_prime(32, true);
vector<int> all_prime;
void prime_calculate()
{
    for (int i = 2; i <= 32; i++)
    {
        if (is_prime[i])
        {
            for (int j = i + i; j <= 32; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
}

void prime_set()
{
    for (int i = 2; i <= 32; i++)
    {
        if (is_prime[i])
        {
            all_prime.push_back(i);
        }
    }
}

int main(){

ios::sync_with_stdio(false);
cin.tie(NULL);
prime_calculate();
prime_set();
  cout<<all_prime.size()<<endl;
for(int x : all_prime){
    cout<<x<<" ";
}


    return 0;
}