#include              <bits/stdc++.h>
#define ll            long long int
#define w(t)          int t; cin>>t; while(t--)
#define F             first
#define S             seco nd
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
        ll e=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            e+=a[i];
        }
        if(e%2==0)cout<<1<<endl;
        else cout<<2<<endl;
    }
    return 0;
}