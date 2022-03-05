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
    int n, x, i1, i2;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x == 1)
            i1 = i;
        else if (x == n)
            i2 = i;
    }
    cout << n - 1 - min(min(i1, n - i1 - 1), min(i2, n - i2 - 1));
}