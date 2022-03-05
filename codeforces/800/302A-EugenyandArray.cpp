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
    int n,m,a,b,c=0,l,r;
    cin>>n>>m;
    a=n;
    while(a--){
        cin>>b;
        c+=(b==1);
    }
    c=min(c,n-c)*2;
    while(m--){
        cin>>l>>r;
        cout<<((r-l)%2&&r-l<c)<<endl;
    }
    return 0;
}