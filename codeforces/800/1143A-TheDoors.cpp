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
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int l=count(a,a+n,0);
    int r=count(a,a+n,1);
    for(int i=0;i<n;i++){
        if(a[i]==0)l--;
        else r--;
        if(l==0||r==0){cout<<i+1;break;}
    }
    return 0;
}