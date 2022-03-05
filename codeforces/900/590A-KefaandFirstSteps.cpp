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
    int a[n],s=0,p=1;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n-1;i++){
        if(a[i]<=a[i+1])p++;
        else{
            s=max(s,p);
            p=1;
        }
    }
    s = max(s, p);
    cout<<s;
    return 0;
}