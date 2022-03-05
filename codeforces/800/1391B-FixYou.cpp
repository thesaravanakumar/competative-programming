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
        ll n,m;
        cin>>n>>m;
        char a[n][m];
        int sum=0;
        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            cin >> a[i][j];
            if(i==n-1&&a[i][j]=='D')sum++;
            if(j==m-1&&a[i][j]=='R')sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}