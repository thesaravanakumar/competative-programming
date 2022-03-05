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
    int sum=0,sum1=0;
    w(t){
        int a,b;
        cin>>a>>b;
        if(a<=0)sum++;
        else sum1++;
    }
    puts((min(sum,sum1)>=2)?"No":"Yes");
    return 0;
}