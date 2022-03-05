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
    w(t)
    {
        int k;
        cin >> k;
        char s[101];
        cin >> s;
        int n = -101, ans = 0;
        for (int i = 0; i < k; i++)
        {
            if (s[i] == 'A')
                n = 0;
            else
                n++;
            if (n > ans)
                ans = n;
        }
        cout << ans << endl;
    }
    return 0;
}