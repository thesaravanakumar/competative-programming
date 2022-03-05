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
    int a[3],b[3],n;
    cin>>a[0]>>a[1]>>a[2];
    cin>>b[0]>>b[1]>>b[2];
    cin>>n;
    if(((n*5-accumulate(a,a+3,0))/5)*10-accumulate(b,b+3,0)>=0)cout<<"YES";else cout<<"NO";
    return 0;
}