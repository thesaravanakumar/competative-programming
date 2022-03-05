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
int countFreq(string &pat, string &txt)
{
	int M = pat.length();
	int N = txt.length();
	int res = 0;
    for (int i = 0; i <= N - M; i++)
	{
		int j;
		for (j = 0; j < M; j++)
			if (txt[i+j] != pat[j])
				break;
		if (j == M)
		{
		res++;
		j = 0;
		}
	}
	return res;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s,a="ZONe";
    cin>>s;
    cout << countFreq(a, s);
    return 0;
}
