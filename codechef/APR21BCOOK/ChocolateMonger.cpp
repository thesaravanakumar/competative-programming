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
        ll n,x;
        cin>>n>>x;
        ll q;
        set<ll> a;
        ll c=0;
        for(ll i=0;i<n;i++){
            cin>>q;
            a.insert(q);
        }
        ll b=a.size();
        if((n-b)-x>0)cout<<b<<endl;
        else cout<<b-(x-(n-b))<<endl;
    }
    return 0;
}
// 1
// 1
// 2