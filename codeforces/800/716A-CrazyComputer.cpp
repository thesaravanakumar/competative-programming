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
    int n, c, a, b, cnt = 1, mx = 1;
    cin >> n >> c >> a;
    n--;
    while (n--)
    {
        cin >> b;
        if (b - a <= c)
            cnt++;
        else
            cnt = 1;
        a = b;
    }
    cout << cnt;
        return 0;
}