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
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<m;i++)cin>>b[i];
        sort(a,a+n);
        int flag=0;
        for(int i=0;i<n;i++){
            int *q=find(b,b+m,a[i]);
            if(q!=b+m){
                cout<<"YES"<<endl<<1<<" "<<a[i]<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)cout<<"NO"<<endl;
    }
    return 0;
}