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
    ll a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    cout << max(min(a, d) * e + min(min(b, c), d - min(d, a)) * f, min(b, min(c, d)) * f + min(a, d - min(b, min(c, d))) * e);
    return 0;
}