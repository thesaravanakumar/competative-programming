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
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n,greater<int>());
        int ans=0,c=0;
        for(int i=0;i<n;i++){
            if(a[i]>=ans){
                c++;
                ans=min(c,a[i]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}