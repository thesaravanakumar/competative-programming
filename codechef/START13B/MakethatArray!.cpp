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
        vector<ll> a(n);
        vector<ll> b(n);
        for(ll i=0;i<n;i++)cin>>a[i];
        for(ll j=0;j<n;j++)cin>>b[j];
        ll qwerty=a[n-1],it=1;
        for(ll i=n-2;i>=0;i--)
        {
            ll alcb=qwerty+a[i];
            a[i]=it*a[i]-qwerty;
            qwerty=alcb;
            it++;
        }
        qwerty=b[n-1];
        it=1;
        for(ll i=n-2;i>=0;i--)
        {
            ll alcb=qwerty+b[i];
            b[i]=it*b[i]-qwerty;
            qwerty=alcb;
            it++;
        }
        ll sol=0;
        a[n-1]=0;
        b[n-1]=0;
        for(ll i=0;i<n;i++)
        {
            sol+=a[i];
            sol-=b[i];
        }
        cout<<sol/2<<"\n";
    }
    return 0;
}


