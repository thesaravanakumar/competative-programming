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
    int n,m,k=0;
    cin>>n>>m;
    int a[n][m];
    int b[10000];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            b[k++]=a[i][j];
        }
    }
    int big=*min_element(b, b + k);int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]!=big)sum+=abs(big-a[i][j]);
        }
    }
    cout<<sum;
    return 0;
}