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
bool a[301];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int p, n, k, i;
    cin >> p >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> k;
        if (a[k % p] == 1)
        {
            cout << i;
            return 0;
        }
        a[k % p] = 1;
    }
    cout << -1;
}