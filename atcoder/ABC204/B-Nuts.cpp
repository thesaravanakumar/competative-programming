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
    ll arr[n],sum=0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>10)sum+=(arr[i]-10);
    }
    cout<<sum;
    return 0;
}