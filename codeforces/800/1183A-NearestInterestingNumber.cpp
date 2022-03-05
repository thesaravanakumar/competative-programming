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
int sumdigit(int n){
    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int sum=sumdigit(n);
    while(sum%4!=0){
        sum=sumdigit(++n);
    }
    cout<<n;
    return 0;
}