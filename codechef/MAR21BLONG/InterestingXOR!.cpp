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
        ll temp=n,i=0;
        while(temp>0){
            temp/=2;
            i++;
        }
        ll a=pow(2,i-1)-1;
        ll b=a^n;
        cout<<a*b<<endl;
    }
    return 0;
}