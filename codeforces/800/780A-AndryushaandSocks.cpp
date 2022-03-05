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
    int a[2*n]={0},m=0,k=0;
    for(int i=1;i<=2*n;i++){
        int x;
        cin>>x;
        a[x]++;
        if(a[x]==2)k--;
        if(a[x]==1)k++;
        m=max(m,k);
    }
    cout<<m;
    return 0;
}