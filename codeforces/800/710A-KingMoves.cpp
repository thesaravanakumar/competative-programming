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
    string s;
    cin>>s;
	if(s=="a8"||s=="a1"||s=="h8"||s=="h1")
		cout<<3;
	else if(s[0]=='a'||s[0]=='h'||s[1]=='8'||s[1]=='1')
		cout<<5;
	else
		cout<<8;
    return 0;
}