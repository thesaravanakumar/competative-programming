#include            <bits/stdc++.h>
#define ll          long long int
#define w(t)        int t; cin>>t; while(t--)
#define ff          first
#define ss          second
#define pb          push_back
#define mp          make_pair
#define pii         pair<int,int>
#define mii         map<int,int>
#define sp(x,y)     fixed<<setprecision(y)<<x
#define mod         1000000007
#define inf         1e18
using namespace std;
int main()
{
    w(t){
        ll n,x;
        cin>>n>>x;
        if(n<=2){cout<<1<<endl;continue;}
        n -= 3;
        ll ans = n / x;
        cout << ans + 2 << endl;
    }
    return 0;
}