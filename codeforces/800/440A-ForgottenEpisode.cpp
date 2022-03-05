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
    int n,a;
    cin >> n;
    int b[n + 1] = {0};
    for (int i = 1; i <= n - 1; i++)
        cin >> a, b[a]++;
    for (int i = 1; i <= n; i++)
        if (b[i] == 0)
        {
            cout << i;
            return 0;
        }
    return 0;
}