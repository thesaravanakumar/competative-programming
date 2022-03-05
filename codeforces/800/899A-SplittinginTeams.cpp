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
    int n;
    cin>>n;
    int a[n],one=0,two=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1)one++;
        else two++;
    }
    cout<<min(one,two)+(one-min(one,two))/3;
    return 0;
}