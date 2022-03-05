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
int fast(int x,int y,int mod){
    int res=1;
    x%=mod;
    if(x==0)return 0;
    while(y>0){
        if(y&1){
            res=(res*x)%mod;
        }
        y=y>>1;
        x=(x*x)%mod;
    }
    return res;
}
int gcd(int a,int b){
    while(b!=0){
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}
void solve(){
    int n;
        cin>>n;
        vector<int >a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        int start=a[0];
        for(int i=1;i<n;i++){
            if(a[i]>start){
                cout<<-1<<endl;
                return;
            }
        }
        stack<int> s;
        for(int i=1;i<n;i++){
            while(s.size() and s.top()<=a[i]){
                s.pop();
            }
            s.push(a[i]);
        }
        int ans=0;
        while(!s.empty()){
            ans++;
            s.pop();
        }
        cout<<ans<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    w(t){
        ll n,k;
        cin>>n>>k;
        k--;
        vector<ll> v(n);
        ll mx=INT_MIN;
        map<ll,ll> mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mx=max(mx,v[i]);
        }
        ll c=0;
        for(int i=0;i<n;i++){
            ll x=i+k;
            if(x<n&&v[x]==mx)c+=(n-x);
        }
        cout<<c<<endl;
    }
    return 0;
}