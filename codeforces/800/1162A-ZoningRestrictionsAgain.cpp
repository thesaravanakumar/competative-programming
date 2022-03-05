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
    int n,h,m;
    cin>>n>>h>>m;
    int a[n+1];
    for(int i=1;i<=n;i++)a[i]=h;
    int s=0,l,r,x;
    for(int i=0;i<m;i++){
        cin>>l>>r>>x;
        for(int j=l;j<=r;j++){
            a[j]=min(a[j],x);
        }
    }
    for(int i=1;i<=n;i++)s+=a[i]*a[i];
    cout<<s;
    return 0;
}