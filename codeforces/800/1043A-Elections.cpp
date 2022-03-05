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
    int n;
    cin>>n;
    int q,mx=0,sum=0;
    for(int i=0;i<n;i++){
        cin>>q;
        mx=max(mx,q);
        sum+=q;
    }
    sum*=2;
    sum+=n;
    sum/=n;
    cout<<max(mx,sum);
    return 0;
}