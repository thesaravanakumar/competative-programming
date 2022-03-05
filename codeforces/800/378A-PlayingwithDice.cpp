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
    int a,b;
    cin>>a>>b;
    int n=6,a1=0,d=0,b1=0;
    while(n){
        if(abs(n-a)<abs(n-b))a1++;
        if(abs(n-a)>abs(n-b))b1++;
        if(abs(n-a)==abs(n-b))d++;
        n--;
    }
    cout<<a1<<" "<<d<<" "<<b1;
    return 0;
}