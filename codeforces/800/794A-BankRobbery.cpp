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
    int a,b,c;
    cin>>a>>b>>c;
    int n;
    cin>>n;
    int q,num=0;
    for(int i=0;i<n;i++){
        cin>>q;
        if(q>b&&q<c)num++;
    }
    cout<<num;
    return 0;
}