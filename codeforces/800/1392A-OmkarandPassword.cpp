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
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        if(a[0]==a[n-1])cout<<n<<endl;
        else cout<<1<<endl;
    }
    return 0;
}