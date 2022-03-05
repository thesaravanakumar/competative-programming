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
    int n,t;
    cin>>n>>t;
    int a[n],ti[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        ti[i]=86400-a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=ti[i];
        if(t-sum<=0){cout<<i+1;break;}
    }
    return 0;
}