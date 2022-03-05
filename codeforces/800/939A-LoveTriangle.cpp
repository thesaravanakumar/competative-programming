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
    int n;
    cin>>n;
    int f[n],flag=0;
    for(int i=1;i<=n;i++)cin>>f[i];
    for(int i=1;i<=n;i++){
        if(f[f[f[i]]]==i){flag=1;break;}
    }
    if(flag==1)cout<<"YES";
    else cout<<"NO";
    return 0;
}