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
    int a,b,c;
    cin>>a>>b>>c;
        if(c==0&&a==b)cout<<"Aoki"<<endl;
        else if(c==1&&a==b)cout<<"Takahashi"<<endl;
        else if(a>b)cout<<"Takahashi"<<endl;
        else cout<<"Aoki"<<endl;

    return 0;
}