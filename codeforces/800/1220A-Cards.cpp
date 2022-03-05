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
    char c;
    int n1=0,z=0;
    for(int i=0;i<n;i++){
        cin>>c;
        if(c=='n')n1++;
        if(c=='z')z++;
    }
    for(int i=0;i<n1;i++)cout<<1<<" ";
    for(int i=0;i<z;i++)cout<<0<<" ";
    return 0;
}