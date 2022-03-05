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
    int n, m, k, x, mn = 101;
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x > 0 && x <= k)
            mn = min(mn, abs(m - i));
    }
    cout << mn * 10;
    return 0;
}