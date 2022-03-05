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
char a[52][52];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    int mini=INT_MAX,maxi=0,minj=INT_MAX,maxj=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
            if(a[i][j]=='*'){
                mini=min(mini,i);
                maxi=max(maxi,i);
                minj=min(minj,j);
                maxj=max(maxj,j);
            }
        }
    }
    for(int i=mini;i<=maxi;i++){
        for(int j=minj;j<=maxj;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}