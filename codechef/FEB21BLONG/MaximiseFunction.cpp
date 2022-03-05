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
        ll a[n],max=INT_MIN,min=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>max)max=a[i];
            if(a[i]<min)min=a[i];
        }
        ll ans=max-min;
        cout<<ans*2<<endl;
    }
    return 0;
}