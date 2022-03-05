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
    w(t)
    {
        int a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;
        int x = a / c + (a % c != 0), y = b / d + (b % d != 0);
        if (x + y > k)
            cout << "-1\n";
        else
            cout << x << ' ' << y << '\n';
    }
    return 0;
}