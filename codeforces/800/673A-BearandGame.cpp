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
int a[91];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int i;
    for(i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]-a[i-1]>15)break;
    }
    cout<<min(90,a[i-1]+15);
    return 0;
}