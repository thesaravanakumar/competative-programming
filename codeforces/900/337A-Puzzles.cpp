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
int n, m, a[1003], ans = 1e9;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < m; i++)
        cin >> a[i];
    sort(a, a + m);
    for (int i = n - 1; i < m; i++)
        ans = min(ans, a[i] - a[i - n + 1]);
    cout << ans << endl;
    return 0;
}