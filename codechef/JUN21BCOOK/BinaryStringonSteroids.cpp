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
        ll n;
    cin>>n;
    string s;
    cin>>s;
    ll total_0=0,total_1=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='1'){
            total_1++;
        }
        else{
            total_0++;
        }
    }
    vector<ll> factors;
    for(ll i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(n/i==i){
                factors.push_back(i);
            }
            else{
                factors.push_back(n/i);
                factors.push_back(i);
            }
        }
    }
    ll ans = 1e9;
    for(auto fact:factors){
        vector<ll> freq(fact);
        for(ll i=0;i<fact;i++){
            for(ll j=i;j<n;j+=fact){
                if(s[j]=='1'){
                    freq[i]++;
                }
            }
        }
        ll req=n/fact;
        for(ll i=0;i<fact;i++){
            ll to_convert=req-freq[i];
            to_convert+=(total_1-freq[i]);
            ans=min(ans,to_convert);
        }
 
    }
    cout<<ans<<endl;
    }
    return 0;
}
//2
//0
