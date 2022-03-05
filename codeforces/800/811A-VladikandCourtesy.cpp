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
    int a,b;
    cin>>a>>b;
    int q=0;
    while(a>=0&&b>=0){
        q++;
        if(q%2)a-=q;
        else b-=q;
    }
    if(a<0)cout<<"Vladik";
    else cout<<"Valera";
    return 0;
}