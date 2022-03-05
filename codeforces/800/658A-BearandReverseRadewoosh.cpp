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
    int n,c;
    cin>>n>>c;
    int a[n],t[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int j=0;j<n;j++)cin>>t[j];
    int b=0,e=0,e1=0;
    for(int i=0;i<n;i++){
        b+=t[i];
        e+=max(0,a[i]-c*b);
    }
    b=0;
    for(int i=n-1;i>=0;i--){
        b+=t[i];
        e1+=max(0,a[i]-c*b);
    }
    if(e>e1)cout<<"Limak";
    else if(e==e1)cout<<"Tie";
    else cout<<"Radewoosh";
    return 0;
}