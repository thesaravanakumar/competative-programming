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
    int n,small=INT_MAX;
    cin>>n;
    for(int i=1;i<=n;i++){
        int a,p,x;
        cin>>a>>p>>x;
        for(int j=0.5;j<a;j+=1){
            x--;
        }
        if(x>0&&small>p)small=p;
    }
    if(small==INT_MAX)cout<<-1;
    else cout<<small;
    return 0;
}