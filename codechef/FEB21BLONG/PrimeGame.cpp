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
bool is(ll n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int p[1000001];
    p[0]=0;
    p[1]=0;
    int c=0;
    for(int i=2;i<1000001;i++){
        if(is(i))c++;
        p[i]=c;
    }
    w(t){
        ll n,k;
        cin>>n>>k;
        if(p[n]>k)cout<<"Divyam\n";
        else cout<<"Chef\n";
    }
    return 0;
}