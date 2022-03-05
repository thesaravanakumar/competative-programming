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
char t[103][103];
int r[103], c[103],ans;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> t[i][j];
            if (t[i][j] == 'C')
            {
                r[i]++;
                c[j]++;
            }
        }
    for (int i = 0; i < n; i++)
        ans += r[i] * (r[i] - 1) / 2;
    for (int i = 0; i < n; i++)
        ans += c[i] * (c[i] - 1) / 2;
    cout << ans;
    return 0;
}