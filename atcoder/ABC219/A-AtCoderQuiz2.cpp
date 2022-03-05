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
    if(n>=90)cout<<"expert";
    else if(n<90&&n>=70)cout<<90-n;
    else if(n<70&&n>=40)cout<<70-n;
    else if(n<40&&n>=0)cout<<40-n;
    return 0;
}