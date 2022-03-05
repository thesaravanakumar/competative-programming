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
int b[101];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,ti;
    cin>>n;
    ti=n;
    while(ti--){
        w(t){
            int a;
            cin>>a;
            b[a]++;
            if(b[a]==n)cout<<a<<" ";
        }
    }
    return 0;
}