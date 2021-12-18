#include<bits/stdc++.h>
using namespace std;

#define int                                          int64_t
#define mp                                           make_pair
#define pb                                           push_back
#define mod                                          1000000007
#define inf                                          1e18 
#define N 20000007
#define vi                                           vector<int>
#define pii                                          pair<int,int>
#define vpii                                         vector<pair<int,int>>
#define mod                                          1000000007
int modularExponentiation(int x, int n)
{
  int result = 1;
  while (n > 0)
  {
    if (n % 2 == 1)
      result = (result * x) % mod;
    x = (x * x) % mod;
    n = n / 2;
  }
  return result;
}
void init()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int32_t main()
{
    init();
    int t;
    t = 1;
    //cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        cout<<modularExponentiation(2,n)%mod<<endl;
    }
    return 0;
}