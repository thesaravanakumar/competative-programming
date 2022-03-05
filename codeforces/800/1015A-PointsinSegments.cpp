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
int n, m, k, l, r, i, f[105];
int main()
{
    cin >> n >> m;
    k = m;
    while (n--)
    {
        cin >> l >> r;
        for (i = l; i <= r; i++)
            if (!f[i])
                f[i] = 1, k--;
    }
    cout << k << endl;
    for (i = 1; i <= m; i++)
        if (!f[i])
            cout << i << " ";
    return 0;
}