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
    int a,b,odd=0,even=0;
    for(int i=0;i<n;i++){cin>>a;(a&1)?odd++:even++;}
    for(int i=0;i<m;i++){cin>>b;(b&1)?((even!=0)?even--:even=0):(odd!=0)?odd--:odd=0;}
    cout<<n-(odd+even);
    return 0;
}