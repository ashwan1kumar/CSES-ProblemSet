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
        int sum = (n*(n+1))/2;;
        if(sum%2){
            cout<<"NO"<<endl;
            return 0;
        }
        else{
            vector<int> a,b;
            int sa = 0,sb = 0;
            for(int i=n;i>=1;i--){
                if(sa<sb){
                    sa+=i;a.pb(i);
                }
                else{
                    sb+=i;b.pb(i);
                }
            }
            cout<<"YES"<<endl;
            cout<<a.size()<<endl;;
            for(auto x:a){
                cout<<x<<" ";
            }
            cout<<endl;
            cout<<b.size()<<endl;
            for(auto x:b){
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}