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
    int l,r;
    cin>>l>>r;
    for(int i=l;i<=r;i++){
        int ans=i,no=0;
        set<int> a;
        while(ans){
            a.insert(ans % 10);
            ans /= 10;
            no++;
        }
        if(a.size()==no){cout<<i;return 0;}
    }
    cout<<"-1";
}