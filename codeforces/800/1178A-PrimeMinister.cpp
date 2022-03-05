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
    int a[200], b[200], i, j, k = 0, l, m = 0, n, s = 0, t = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        m += a[i];
        if (i == 0 || 2 * a[i] <= a[0])
        {
            b[k++] = i + 1;
            s += a[i];
        }
    }
    if (2 * s <= m)
    {
        cout << "0";
    }
    else
    {
        cout << k << endl;
        for (i = 0; i < k; i++)
        {
            cout << b[i] << " ";
        }
    }
    return 0;
}