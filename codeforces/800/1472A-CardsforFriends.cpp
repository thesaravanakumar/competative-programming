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
        int w,h,n;
        cin>>w>>h>>n;
        int sum=1;
        while(w%2==0){sum*=2;w/=2;}
        while(h%2==0){sum*=2;h/=2;}
        if(sum>=n)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}