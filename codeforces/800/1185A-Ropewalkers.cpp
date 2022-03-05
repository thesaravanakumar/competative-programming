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
    int a[3],d;
    cin>>a[0]>>a[1]>>a[2]>>d;
    sort(a,a+3);
    int sum=0;
    if(a[1]-a[0]<d)sum+=d-(a[1]-a[0]);
    if(a[2]-a[1]<d)sum+=d-(a[2]-a[1]);
    cout<<sum;
    return 0;
}