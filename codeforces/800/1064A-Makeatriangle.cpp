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
    int a,b,c;
    cin>>a>>b>>c;
    int sum=0;
    if(a+b<=c)sum+=(c-(a+b))+1;
    if(b+c<=a)sum+=(a-(b+c))+1;
    if(c+a<=b)sum+=(b-(a+c))+1;
    cout<<sum;
    return 0;
}