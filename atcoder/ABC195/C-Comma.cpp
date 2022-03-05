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
    ll n;
    cin>>n;
    ll c=0;
    ll p=n;
    while(p>0){
        c++;
        p/=10;
    }
    ll ans=0;
    ll arr[17];
    arr[0]=1;
    for(ll i=1;i<17;i++){
        arr[i]=arr[i-1]*10;
    }
    for(ll i=4;i<c;i++){
        ans+=9*arr[i-1]*((i+2)/3-1);
    }
    vector<int> d;
    p=n;
    while(p>0){
        d.pb(p%10);
        p/=10;
    }
    ll x=0;
    for(ll i=0;i<c-1;i++){
        x+=d[i]*arr[i];
    }
    x++;
    x+=(d[c-1]-1)*arr[c-1];
    ans+=x*((c+2)/3-1);
    cout<<ans;
    return 0;
}