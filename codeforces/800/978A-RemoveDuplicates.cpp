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
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    set<int> seen;
    vector<int> b;
    for(int i=n-1;i>=0;i--){
        if(seen.find(a[i])==seen.end()){
            seen.insert(a[i]);
            b.pb(a[i]);
        }
    }
    cout<<b.size()<<endl;
    for(auto i=b.rbegin();i!=b.rend();i++)cout<<*i<<" ";
    return 0;
}