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
        int a,b,c;
        cin>>a>>b>>c;
        int n=min(b,c/2);
        int m=min(a,(b-n)/2);
        cout<<3*(n+m)<<endl;
    }
    return 0;
}