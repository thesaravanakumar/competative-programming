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
    int n,x;
    cin>>n>>x;
    string a;
    cin>>a;
    for(int i=0;i<n;i++){
        if(a[i]=='o')x++;
        else if(a[i]=='x'&&x>0)x--;
    }
    cout<<x;
    return 0;
}