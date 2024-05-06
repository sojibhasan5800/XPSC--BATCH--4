
#include <bits/stdc++.h>
using namespace std;
#define faster            ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ff                first
#define ss                second
#define pb                push_back
#define pr                pair<int,int>
#define im                -1e18
#define mem(a,b)          memset(a,b,sizeof(a))
#define gcd(a, b)         __gcd(a, b)
#define lcm(a, b)         (a * (b / gcd(a, b)))
#define all(a)            a.begin(), a.end()
#define setbit(n)         __builtin_popcount(n);
#define totalbit(n)       log2(n)+1
             

#define for0(a,n)         for(int i=a;i<n;i++)
#define for1(a,n)         for(int i=a;i<=n;i++)
#define rfor0(n, a)       for(int i=n-1; i>=a; i--)
#define rfor1(n, a)       for(int i=n; i>a; i--)

#define nl                endl
#define len(v)            v.size()
#define lena(a)           sizeof(a)/sizeof(a[0])
#define no                cout<<"NO"<<nl;
#define yes               cout<<"YES"<<nl;
#define posation(x)       cout<<fixed<<setprecision(x)
#define pi                3.141592653589793
#define INF               100000000000
#define mod               1000000007 //10^9+7;
#define num               1000005


typedef long long int ll;
typedef unsigned long long int llu;

/**---Graph move---**/
int dx[]= {-1, 0, 1,  0, -1, -1,  1, 1};
int dy[]= { 0, 1, 0, -1, -1,  1, -1, 1};
int kx[]= {-2,-1, 1, 2,  2,  1, -1, -2};
int ky[]= { 1, 2, 2, 1, -1, -2, -2, -1};

//map<int,int,greater<int>>m;

int main()
{
    int tc;
    cin>>tc;
    while(tc--){
       int n;
       cin>>n;
       int ar[n];
       map<int,int>mp,mp1;
       for(int i=0;i<n;i++)
       {
           cin>>ar[i];
           mp[ar[i]]++;
       }
       vector<int>v;
       for(auto it:mp)
       {
           int x=it.first;
           int y=it.second;
           if(x<=n)
           {
               for(int i=1;i<y;i++)v.push_back(x);
               mp1[x]=1;
           }
           else{
            for(int i=1;i<=y;i++)v.push_back(x);
           }
       }
     
       int cnt=1;
       int ans=0;
      for(int i=0;i<v.size();i++)
      {
          for(int j=cnt;j<=n;j++)
          {
              if(mp1[j]==1)cnt++;
              else break;
          }
          int x=(v[i]-1)/2;
          if(cnt<=x)
          {
              cnt++;
              ans++;
          }
          else
          {
              ans=-1;
              break;
          }
      }
      cout<<ans<<endl;

    }
}

