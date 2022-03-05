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
        ll n, m;
        cin>>n>>m;
        ll c = 0;
        vector<ll> mod(n+1, 1);
        for(ll a = 2;a<=n;a++)
        {
            ll x = m%a;
            c += mod[x];
            for(ll b = x;b<=n;b+=a)
            {
                mod[b]++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}