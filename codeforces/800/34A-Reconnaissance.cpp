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
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)cin>>a[i];
    int min=abs(a[n]-a[1]),q=1,w=n;
    for(int i=1;i<=n-1;i++){
        if(abs(a[i]-a[i+1])<min){
            q=i;
            w=i+1;
            min=abs(a[i]-a[i+1]);
        }
    }
    cout<<q<<" "<<w;
    return 0;
}