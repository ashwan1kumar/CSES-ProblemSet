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
int arr[N];


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
        string str;
        cin>>str;
        int ans= 0;
        int x = 1;
        for(int i = 1;i<str.length();i++){
            if(str[i]==str[i-1]){
                x++;
                continue;
            }
            else{
                ans = max(ans,x);
                x=1;
            }
        }
        ans = max(ans,x);
        cout<<ans<<endl;
    }
    return 0;
}