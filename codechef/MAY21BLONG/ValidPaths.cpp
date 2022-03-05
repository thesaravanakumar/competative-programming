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
#define sz(a) (int)(a.size())
#define f(i, a, b) for(int i=a; i<b; i++)
#define mod 1000000007
#define rz resize
using namespace std;
ll ans;
vector<vector<int>> v;
vector<ll> dp, tot;
void dfs(int cur, int par)
{
    dp[cur]=1, tot[cur]=1;
    ll sum = 0, cnt = 0;
    f(i, 0, sz(v[cur]))
    {
        ll node = v[cur][i];
        if(node != par)
        {
            dfs(node, cur);
            dp[cur]+=((2*dp[node])%mod), dp[cur]%=mod, cnt++, tot[cur]+=tot[node], tot[cur]%=mod, tot[cur]+=dp[node], tot[cur]%=mod;
            sum += dp[node];
        }
    }
    f(i, 0, sz(v[cur]))
    {
        int node = v[cur][i];
        if(node != par)
        {
            tot[cur] += (dp[node]*((sum-dp[node]+mod)%mod))%mod;
            tot[cur] %= mod;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    w(t){
        ans = 0;
        int n;cin>>n;
        v.rz(n+1), dp.rz(n+1), tot.rz(n+1);
        f(i, 0, n-1)
        {
            int l, r;
            cin>>l>>r;
            v[l].pb(r), v[r].pb(l);
        }
        dfs(1, 1);
        ll ans = tot[1]%mod;
        cout<<ans<<endl;
        dp.clear(), v.clear(), tot.clear();
    }
    return 0;
}