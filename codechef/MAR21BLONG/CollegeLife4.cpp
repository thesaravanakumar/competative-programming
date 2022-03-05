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
        ll n,e,h,a,b,c;
        cin>>n>>e>>h>>a>>b>>c;
        vector<ll> ans;
        vector<ll> temp;
        for(ll i=0;i<=n;i++)temp.pb(i);
        ll t1=0,t2=0;
        ll o,k;
        for(ll i=0;i<=n;i++){
            t1=lower_bound(temp.begin(),temp.end(),(2*n-e-2*i))-temp.begin();
            t2=upper_bound(temp.begin(),temp.end(),(h-3*i))-temp.begin()-1;
            if(t2<t1||t1==n+1)continue;
            if(t2==n+1&&(t2+3*i>h))continue;
            if(c>a)k=(t1<(n-i)?t1:(n-i));
            else k=(t2<(n-i)?t2:(n-i));
            o=n-k-i;
            if((k+2*i)>=2*n-e&&(k+3*i)<=h)ans.pb(a*o+b*i+c*k);
        }
        if(ans.size()==0)cout<<-1<<endl;
        else{
            ll fa=1e18;
            for(ll i=0;i<ans.size();i++)fa=min(fa,ans[i]);
            cout<<fa<<endl;
        }
    }
    return 0;
}