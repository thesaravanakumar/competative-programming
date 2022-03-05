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
int n,m,r,maxi,mini=10001;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m>>r;
    int x;
    for(int i=0;i<n;i++){cin>>x;mini=min(mini,x);}
    for(int i=0;i<m;i++){cin>>x;maxi=max(maxi,x);}
    cout<<max(r,r%mini+r/mini*maxi);
    return 0;
}