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
        int n,k1,k2;
        cin>>n>>k1>>k2;
        int a[k1],b[k2];
        for(int i=0;i<k1;i++)cin>>a[i];
        for(int i=0;i<k2;i++)cin>>b[i];
        sort(a,a+k1,greater<int>());
        if(a[0]==n)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}