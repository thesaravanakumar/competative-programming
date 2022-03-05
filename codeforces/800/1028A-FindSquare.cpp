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
    char a[n][m];
    int x=0,y=0,z=0;
    for(int i=0;i<n;i++)for(int j=0;j<m;j++){
        cin>>a[i][j];
        if(a[i][j]=='B'){
            z++;
            x+=i+1;
            y+=j+1;
        }
    }
    cout<<x/z<<" "<<y/z;
    return 0;
}