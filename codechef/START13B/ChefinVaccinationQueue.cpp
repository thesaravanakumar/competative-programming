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
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
        int n,p,x,y;
        cin>>n>>p>>x>>y;
        int arr[n],c=0;
        for(int i=1;i<=n;i++)cin>>arr[i];
        for(int i=1;i<=p;i++){
            if(arr[i]==1)c+=y;
            else if(arr[i]==0)c+=x;
        }
        cout<<c<<endl;
    }
    return 0;
}
// 5
// 3
// 6
