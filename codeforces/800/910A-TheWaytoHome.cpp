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
    int n,d;
    string s;
    cin>>n>>d>>s;
    int a=0,b=0;
    while(a<n-1&&b<=n){
        if(s[a]=='1'){
            b++;
            a+=d;
        }
        else a--;
    }
    cout<<(b>=n?-1:b);
    return 0;
}