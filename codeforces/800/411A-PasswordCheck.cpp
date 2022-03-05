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
int k,l,m;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    for(char c:s){
    if(c>='A'&&c<='Z')k=1;
    if(c>='a'&&c<='z')l=1;
    if(c>='0'&&c<='9')m=1;
}
cout<<(s.size()>=5&&k+l+m==3?"Correct":"Too weak");
    return 0;
}