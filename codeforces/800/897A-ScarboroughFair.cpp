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
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    while(m--){
        int l,r;char c1,c2;
        cin>>l>>r>>c1>>c2;
        for(int i=l-1;i<=r-1;i++){
            if(s[i]==c1)s[i]=c2;
        }
    }
    cout<<s;
    return 0;
}