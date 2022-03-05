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
    ll n,x;
    cin>>n>>x;
    ll arr[n+1],sum=0;
    for(ll i=1;i<=n;i++){
        cin>>arr[i];
        if(i%2)sum+=arr[i];
        else sum+=arr[i]-1;
    }
    if(sum<=x)cout<<"Yes";
    else cout<<"No";
}