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
    int x,y,z,t1,t2,t3;
    cin>>x>>y>>z>>t1>>t2>>t3;
    if(abs(x-y)*t1<(abs(z-x)*t2+abs(x-y)*t2+3*t3))cout<<"NO";
    else cout<<"YES";
    return 0;
}