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
    map<string, string> a = {{"red", "Reality"}, {"purple", "Power"}, {"yellow", "Mind"}, {"orange", "Soul"}, {"blue", "Space"}, {"green", "Time"}};
	int n;
	string s;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>s;
		a.erase(s);
	}
	cout<<a.size()<<'\n';
	for(auto i:a){
		cout<<i.second<<'\n';
	}
    return 0;
}