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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    bool c=true;
    for(ll i=0;i<n;i++,c=!c){
        if(s[i]=='1')break;
    }
    if(c)cout<<"Takahashi";
    else cout<<"Aoki";
    return 0;
}