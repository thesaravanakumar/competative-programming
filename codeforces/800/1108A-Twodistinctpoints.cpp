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
        int l1,r1,l2,r2;
        cin >>l1>>r1>>l2>>r2;
        if(r1==r2)cout<<r1-1<<" "<<r2<<endl;
        else cout<<r1<<" "<<r2<<endl;
    }
    return 0;
}