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
    string a;
    cin>>a;
    int sum=0;
    for(int i=0;i<a.size();i++)
    for(int j=i+1;j<a.size();j++)
    for(int k=j+1;k<a.size();k++)
    if(a[i]=='Q'&&a[j]=='A'&&a[k]=='Q')
    sum++;
    cout<<sum;
    return 0;
}