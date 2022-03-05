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
    int s1=0,s2=0,k;
    for(int i=0;i<n;i++){cin>>k;s1+=k;}
    for(int i=0;i<n;i++){cin>>k;s2+=k;}
    if(s1<s2)cout<<"No";
    else cout<<"Yes";
    return 0;
}