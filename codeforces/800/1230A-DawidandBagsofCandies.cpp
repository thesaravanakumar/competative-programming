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
#define MOD1          998244353
#define MOD           1000000007
#define M             1000000009
#define inf           1e18
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a[4];
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    sort(a,a+4);
    ((abs(a[1]+a[2]-a[3]))==a[0])?cout<<"YES":cout<<"NO";
    return 0;
}