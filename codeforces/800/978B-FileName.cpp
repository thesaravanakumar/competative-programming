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
    int n,count=0;string s;
    cin>>n>>s;
    for(int i=0;i<n;i++){
        if(s.substr(i,3)=="xxx")count++;
    }
    cout<<count<<endl;
    return 0;
}