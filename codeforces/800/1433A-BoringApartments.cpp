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
ll noofdigit(ll a){
    ll sum=0;
    while(a){
        sum++;
        a/=10;
    }
    return sum;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    w(t){
        ll x;
        cin>>x;
        ll n=noofdigit(x);
        ll sum=(n*(n+1))/2;
        for(int i=1;i<x%10;i++)sum+=10;
        cout<<sum<<endl;
    }
    return 0;
}