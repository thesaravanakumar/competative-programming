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
    string s;
    cin>>s;
    int one=count(s.begin(),s.end(),'1');
    int zero=count(s.begin(),s.end(),'0');
    if(one!=zero)cout<<1<<endl<<s;
    else cout<<2<<endl<<s[0]<<" "<<s.substr(1);
    return 0;
}