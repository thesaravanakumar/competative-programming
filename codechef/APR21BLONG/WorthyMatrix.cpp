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
        ll n,m,k;
        cin>>n>>m>>k;
        double ma[n+1][m+1];
        for(ll i=0;i<=n;i++){
            for(ll j=0;j<=m;j++){
                if(i==0||j==0)ma[i][j]=0;
                else cin>>ma[i][j];
            }
        }
        for(ll i=0;i<=n;i++){
            double pr=0;
            for(ll j=0;j<=m;j++){
                ma[i][j]+=pr;
                pr=ma[i][j];
            }
        }
        for(ll j=0;j<=m;j++){
            double pr=0;
            for(ll i=0;i<=n;i++){
                ma[i][j]+=pr;
                pr=ma[i][j];
            }
        }
        ll z=min(n,m);
        ll ans=0;
        for(ll len=1;len<=z;len++){
            for(ll i=len;i<=n;i++){
                for(ll j=len;j<=m;j++){
                    if((ma[i][j]+ma[i-len][j-len]-ma[i][j-len]-ma[i-len][j])/(len*len)>=k)
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}