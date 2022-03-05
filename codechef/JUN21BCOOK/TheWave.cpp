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
    ll n,q;
    cin>>n>>q;
    ll arr[n];
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(ll i=0;i<q;i++){
        ll x;
        cin>>x;
        ll pos=lower_bound(arr,arr+n,x)-arr;
        if(pos<n && arr[pos]==x)
            cout<<0<<endl;
        else if(pos%2==0)
            cout<<"POSITIVE"<<endl;
        else
            cout<<"NEGATIVE"<<endl;
 
    }
    return 0;
}
// POSITIVE
// NEGATIVE
// POSITIVE
// NEGATIVE
// POSITIVE
// 0