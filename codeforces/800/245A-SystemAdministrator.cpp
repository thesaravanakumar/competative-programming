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
int a[3];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    w(t){
        int n,x,y;
        cin>>n>>x>>y;
        a[n]+=x-y;
    }
    cout<<(a[1]>=0?"LIVE":"DEAD")<<endl;
    cout<<(a[2]>=0?"LIVE":"DEAD");
    return 0;
}