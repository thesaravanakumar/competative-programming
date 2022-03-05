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
    int n, a, b, f[101], i;
    cin >> n >> a >> b;
    for (i = 1; i <= a; i++)
    {
        int x;
        cin >> x;
        f[x] = 1;
    }
    for (i = 1; i <= b; i++)
    {
        int y;
        cin >> y;
        f[y] = 2;
    }
    for (i = 1; i <= n; i++)
        cout << f[i] << " ";
    return 0;
}