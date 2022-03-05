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
        ll n;
        cin>>n;
        ll a=0;
        while(n%5?n%3?n%2?0:(n/=2,++a):(n/=3,a+=2):(n/=5,a+=3));
        (n==1)?cout<<a<<endl:cout<<-1<<endl;
    }
    return 0;
}