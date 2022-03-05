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
    ll z=0,ans=0,neg=0;
    w(t){
        int a;
        cin>>a;
        if(a==0)z++;
        else if(a<0){
            ans+=-1-a;
            neg++;
        }
        else ans+=a-1;
    }
    if(neg%2==1&&!z)ans+=2;
    cout<<ans+z;
    return 0;
}