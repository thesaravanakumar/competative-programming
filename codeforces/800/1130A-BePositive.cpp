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
    int n,k,p=0,ne=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k;
        if(k>0)p++;
        if(k<0)ne++;
    }
    if(p>=(n+1)/2)cout<<1;
    else if(ne>=(n+1)/2)cout<<-1;
    else cout<<0;
    return 0;
}