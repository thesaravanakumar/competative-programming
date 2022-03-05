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
    int k2,k3,k5,k6;
    cin >> k2>> k3>> k5>> k6;
    ll sum=min(min(k2,k5),k6)*256;
    k2=k2-min(min(k2,k5),k6);
    sum+=min(k2,k3)*32;
    cout<<sum;
    return 0;
}