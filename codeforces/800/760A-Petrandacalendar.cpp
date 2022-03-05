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
    int m,d;
    cin>>m>>d;
    if(m==2 && d==1)
        cout<<4;
    else if(m==2 && d!=1)
        cout<<5;
    else if(d==7)
        cout<<6;
    else if((m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)&& d==6)
        cout<<6;
    else
        cout<<5;
    return 0;
}