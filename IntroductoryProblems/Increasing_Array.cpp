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
        int n;
        cin>>n;
        int ans = 0;
        int arr[n];
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=1;i<n;i++){
            if(arr[i]<arr[i-1]){
                int a = abs(arr[i]-arr[i-1]);
                ans+=a;
                arr[i]+=a;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}