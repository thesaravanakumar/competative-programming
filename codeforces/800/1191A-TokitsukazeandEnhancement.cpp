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
	int x;
	cin>>x;
	if(x%4==0) puts("1 A");
	else if(x%4==1) puts("0 A");
	else if(x%4==2) puts("1 B");
	else if(x%4==3) puts("2 A");
	return 0;
}