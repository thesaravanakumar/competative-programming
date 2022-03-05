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
    int n,a[50][50];
    cin>>n;
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>a[i][j];
    for(int i=0;i<n;i++)for(int j=0;j<n;j++){
        if(a[i][j]!=1)
        {bool ok=0;for(int k=0;k<n;k++)for(int l=0;l<n;l++){
            if(a[i][j]==a[k][j]+a[i][l])ok=1;
        }if(!ok){cout<<"No";return 0;}
        }
    }cout<<"Yes";
    return 0;
}