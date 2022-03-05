#include              <bits/stdc++.h>
#define ll            long long int
#define w(t)          int t; cin>>t; while(t--)
#define F             first
#define S             second
#define pb            push_back
#define mp            make_pair
#define pii           pair<int,int>
#define mii           map<int,int>
#define sp(x,y)       fixed<<setprecision(y)<<x
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    w(t){
        ll n,q;
        cin>>n>>q;
        ll a[n];
        for(int i = 0;i<n;i++)
            cin>>a[i];
        int dp[31] = {0};
        for(int i=0;i<n;i++){
            for(int j=0;j<31;j++){
                ll x = 1<<j;
                if(a[i]&x)
                    dp[j] += 1;
            }
        }
        ll ans = 0;
        for(int i=0;i<31;i++){
            ll x = 1<<i;
            if(dp[i])
                ans += x;
        }
        cout<<ans<<endl;
        for(int k=0;k<q;k++){
            ll idx,val;
            cin>>idx>>val;
            for(int i=0;i<31;i++){
                ll x=1<<i;
                if(a[idx-1]&x){
                    dp[i] -= 1;
                }
            }
            for(int i=0;i<31;i++){
                ll x = 1<<i;
                if(val&x){
                    dp[i] += 1;
                }
            }
            a[idx-1] = val;
            ll ans = 0;
            for(int i=0;i<31;i++){
                ll x = 1<<i;
                if(dp[i]>0)
                    ans += x;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
// 3
// 7
// 6
// 7
// 3