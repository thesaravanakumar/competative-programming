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
    int n,k,ans=0;
    cin>>n>>k;
    while(n--){
        int x;
        cin>>x;
        int c=0;
        while(x){
            if(x%10==7||x%10==4)c++;
            x/=10;
        }
        if(c<=k)ans++;
    }
    cout<<ans;
    return 0;
}