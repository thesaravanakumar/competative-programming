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
    cin>>a>>b;
    if(a==b)cout<<a;
    else if(a==0&&b==1)cout<<2;
    else if(a==1&&b==0)cout<<2;
    else if(a==0&&b==2)cout<<1;
    else if(a==2&&b==0)cout<<1;
    else if(a==1&&b==2)cout<<0;
    else if(a==2&&b==1)cout<<0;
    return 0;
}