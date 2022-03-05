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
unordered_map<char, int> h;
bool compare(string x, string y)
{
	for (int i = 0; i < min(x.size(), y.size()); i++) {
		if (h[x[i]] == h[y[i]])
			continue;
		return h[x[i]] < h[y[i]];
	}
	return x.size() < y.size();
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string str,a;
    cin>>str;
    int n;
    cin>>n;
    vector<string> v;
    for(int i=0;i<n;i++){
        cin>>a;
        v.pb(a);
    }
    h.clear();
	for(int i=0;i<str.size();i++)h[str[i]]=i;
	sort(v.begin(), v.end(), compare);
	for(auto x : v)cout<<x<<endl;
    return 0;
}

