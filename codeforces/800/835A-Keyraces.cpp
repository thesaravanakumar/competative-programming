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
    int s,v1,v2,t1,t2;
    cin>>s>>v1>>v2>>t1>>t2;
    int a=s*v1+2*t1,b=s*v2+2*t2;
    if(a==b)cout<<"Friendship";
    else if(a>b)cout<<"Second";
    else cout<<"First";
    return 0;
}