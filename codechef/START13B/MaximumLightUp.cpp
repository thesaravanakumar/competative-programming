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
    w(t){
        ll p,a,b,c,x,y;
        cin>>p>>a>>b>>c>>x>>y;
        ll w=(a*x)+b;
        ll s=(a*y)+c;
        cout<<p/min(w,s)<<endl;
    }
    return 0;
}
// 4
// 4
// 9



