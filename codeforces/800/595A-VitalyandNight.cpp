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
    int n,m;
    cin>>n>>m;
    int a[n][2*m];
    for(int i=0;i<n;i++)for(int j=0;j<2*m;j++)cin>>a[i][j];
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<2*m;j+=2){
            if(a[i][j]==1||a[i][j+1]==1)c++;
        }
    }
    cout<<c;
    return 0;
}