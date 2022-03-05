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
        ll a,b,k,flag=0,sum=0;
        cin>>a>>b>>k;
        if(k%2==0){
            cout<<a*(k/2)-b*(k/2)<<endl;
        }
        else{
            cout<<a*(k/2+1)-b*(k/2)<<endl;
        }
    }
    return 0;
}