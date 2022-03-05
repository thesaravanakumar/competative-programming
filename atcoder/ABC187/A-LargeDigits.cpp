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
int summ(int n){
    int a=0;
    while(n){
        a+=n%10;
        n/=10;
    }
    return a;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a,b;
    cin>>a>>b;
    if(summ(a)>=summ(b))cout<<summ(a);
    else cout<<summ(b);
    return 0;
}