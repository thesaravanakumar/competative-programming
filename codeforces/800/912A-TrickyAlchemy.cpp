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
    ll a,b;
    cin>>a>>b;
    ll x,y,z;
    cin>>x>>y>>z;
    ll yellow=2*x+y;
    ll blue=3*z+y;
    cout<<max(0LL,yellow-a)+max(0LL,blue-b);
    return 0;
}