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
    ll n,s,d;
    bool temp=false;
    cin>>n>>s>>d;
    for(int i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        if(x<s&&y>d)temp=true;
    }
    if(temp)cout<<"Yes";
    else cout<<"No";
    return 0;
}