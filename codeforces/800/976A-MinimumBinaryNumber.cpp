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
    string a,b;
    cin>>a;
    int z=count(a.begin(),a.end(),'0');
    if(z==n)cout<<a;
    else {
        cout<<1;
        for(int i=1;i<=z;i++)cout<<0;
    }
    return 0;
}