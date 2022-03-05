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
    ll n;
    cin>>n;
    if(n%10==0)cout<<n;
    else{
        if(n%10<5)cout<<n-(n%10);
        else if(n%10>5)cout<<n+(10-n%10);
        else cout<<n-5;
    }
    return 0;
}