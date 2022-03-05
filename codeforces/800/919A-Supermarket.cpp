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
    double n,m;
    cin>>n>>m;
    double mini=101;
    while(n--){
        double k,a;
        cin>>k>>a;
        mini=min(mini,k/a);
    }
    cout<<sp(m*mini,8);
    return 0;
}