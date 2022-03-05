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
    ll a,b,c;
    cin>>a>>b>>c;
    if(a==b)cout<<c;
    else if(a==c)cout<<b;
    else if(b==c)cout<<a;
    else cout<<0;
    return 0;
}