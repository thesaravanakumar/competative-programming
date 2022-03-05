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
bool isps(int i){
    int a=sqrt(i);
    return (a*a==i)?true:false;
}
bool isfib(int i){
    return isps(5*i*i+4)||isps(5*i*i-4);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<((isfib(i))?"O":"o");
    }
    return 0;
}