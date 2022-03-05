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
    ll n,k;
    cin>>n>>k;
    int r=2*n,g=5*n,b=8*n,sum=0;
    sum+=r/k+((r%k)?1:0);
    sum+=g/k+((g%k)?1:0);
    sum+=b/k+((b%k)?1:0);
    cout<<sum;
    return 0;
}