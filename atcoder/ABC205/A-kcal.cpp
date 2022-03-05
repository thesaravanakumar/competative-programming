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

// ll modular(ll base, unsigned long long int exp, unsigned int mod)
// {
//     ll x = 1;
//     ll power = base % mod;

//     for (ll i = 0; i < sizeof(long long int) * 8; i++) {
//         ll least_sig_bit = 0x00000001 & (exp >> i);
//         if (least_sig_bit)
//             x = (x * power) % mod;
//         power = (power * power) % mod;
//     }

//     return x;
// }
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // ll a,b,c;
    // cin>>a>>b>>c;
    // if(modular(a,c,1000000007)==modular(b,c,1000000007))cout<<"=";
    // else if(modular(a,c,1000000007)<modular(b,c,1000000007))cout<<"<";
    // else if(modular(a,c,1000000007)>modular(b,c,1000000007))cout<<">";
    // return 0;
    float a,b;
    cin>>a>>b;
    float ans=b/100;
    ans*=a;
    cout<<ans;
    return 0;
}