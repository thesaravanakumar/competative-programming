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
    int n,i;
    cin>>n;
    for(i=n/2;i>=1;i--){
        if(__gcd(i,n-i)==1)break;
    }
    cout<<i<<" "<<n-i;
    return 0;
}