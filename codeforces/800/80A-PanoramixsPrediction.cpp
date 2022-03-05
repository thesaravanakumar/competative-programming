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
bool isprime(int n){
    int sum=1;
    for(int i=2;i<=n;i++)if(n%i==0)sum++;
    if(sum==2)return true;
    else return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    int temp;
    for(int i=n+1;i<=m;i++){
        if(isprime(i)){
            temp=i;
            break;
        }
    }
    if(temp==m)cout<<"YES";
    else cout<<"NO";
    return 0;
}