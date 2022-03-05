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
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        ll ans=0,temp=0;
        for(ll i=0;i<n;i++){
            if(i+1<a[i]){
                temp=1;
                break;
            }
            ans+=(i+1-a[i]);
        }
        if(temp==1)cout<<"Second"<<endl;
        else if(ans%2==1)cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
    return 0;
}