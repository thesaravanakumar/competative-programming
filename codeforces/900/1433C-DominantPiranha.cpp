#include <bits/stdc++.h>
#define ll long long int
#define w(t)  \
    int t;    \
    cin >> t; \
    while (t--)
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define mii map<int, int>
#define sp(x, y) fixed << setprecision(y) << x
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n], q;
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        ll c = count(a, a + n, a[0]);
        if (c == n)
            q = -2;
        else
        {
            ll max = *max_element(a, a + n);
            for (ll i = 0; i < n; i++)
            {
                if (max == a[i])
                {
                    if ((i == 0 && a[i] != a[i + 1]) || (i == n - 1 && a[i - 1] != a[i]))
                    {
                        q = i;
                        break;
                    }
                    else if (a[i - 1] != a[i] && i != 0 || a[i] != a[i + 1] && i != n - 1)
                    {
                        q = i;
                        break;
                    }
                }
            }
        }
        cout << q + 1 << endl;
    }
    return 0;
}