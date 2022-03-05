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
    int n,s;
    cin>>n>>s;
    int a[n],sum=0;
    for(int i=0;i<n;i++){cin>>a[i];sum+=a[i];}
    sort(a,a+n);
    sum-=a[n-1];
    cout<<(sum<=s?"YES":"NO");
    return 0;
}