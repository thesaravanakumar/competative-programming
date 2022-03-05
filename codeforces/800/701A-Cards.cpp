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
    pair<int,int> a[n];
    for(int i=0;i<n;i++)cin>>a[i].F,a[i].S=i+1;
    sort(a,a+n);
    for(int i=0,j=n-1;i<n/2;i++,j--){
        cout<<a[i].S<<" "<<a[j].S<<endl;
    }
    return 0;
}