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
    int n;
    cin >> n;
    char a[n][n];
    int sum = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            if (a[i][j] == 'X' && a[i - 1][j - 1] == 'X' && a[i - 1][j + 1] == 'X' && a[i + 1][j - 1] == 'X' && a[i + 1][j + 1] == 'X')
                sum++;
        }
    }
    cout << sum;
    return 0;
}