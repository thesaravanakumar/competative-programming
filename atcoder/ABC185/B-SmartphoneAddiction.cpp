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
    ll n,m,t,timel=0;
    cin>>n>>m>>t;
    ll full=n;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        n-=(a-timel);
        timel=b;
        if(n<=0){cout<<"No";return 0;}
        n+=(b-a);
        if(n>full)n=full;
    }
    if((n-(t-timel))<=0)cout<<"No";
    else
    cout<<"Yes";
    return 0;
}