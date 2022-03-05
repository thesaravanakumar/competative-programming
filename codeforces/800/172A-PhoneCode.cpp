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
    cin >> n;
    string s;
    cin >> s;
    int m = s.size();
    while (--n)
    {
        string st;
        cin >> st;
        for (int i = 0; i < m; i++)
        {
            if (s[i] != st[i])
            {
                m = i;
                break;
            }
        }
    }
    cout << m;
    return 0;
}