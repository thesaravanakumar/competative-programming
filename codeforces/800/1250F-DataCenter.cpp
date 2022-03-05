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
    int p,a,b,n,min=INT_MAX;
    cin>>n;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            a=i;
            b=n/i;
        }
        p=2*a+2*b;
        if(p<min)min=p;
    }
    cout<<min;
    return 0;
}