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
        ll sum=0;
        sum=(n/4)*44;
        ll rem=(n%4);
        if(n>=4){
            if(rem==0)sum+=16;
            if(rem==1)sum+=32;
            if(rem==2)sum+=44;
            if(rem==3)sum+=55;
            cout<<sum<<endl;
        }
        else{
            ll r;
            if(rem==1)r=20;
            if(rem==2)r=36;
            if(rem==3)r=51;
            cout<<r<<endl;
        }
    }
    return 0;
}