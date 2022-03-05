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
    int k;
    cin>>k;
    int a[12];
    for(int i=0;i<12;i++)cin>>a[i];
    sort(a,a+12,greater<int>());
    int n=0,sum=0,temp=0;
    for(int i=0;i<12;i++){
        sum+=a[i];
        n++;
        if(sum>=k){temp=1;break;}
    }
    if(k==0)cout<<0;
    else if(temp)cout<<n;
    else cout<<-1;
    return 0;
}