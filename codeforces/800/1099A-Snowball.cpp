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
    int w, h, k, l, n, m;
    cin >> w >> h >> k >> n >> l >> m;
    for (; h > 0; --h)
    {
        w += h;
        if (h == n)
            w = max(0, w - k);
        if (h == m)
            w = max(0, w - l);
    }
    cout << w;
    return 0;
}