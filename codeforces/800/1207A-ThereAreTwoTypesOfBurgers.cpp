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
    w(t){
        int b, p, f, h, c;
        cin >> b >> p >> f >> h >> c;
        int res = 0;
        if (h >= c)
        {
            int x = min(b / 2, p);
            res += x * h;
            b -= 2 * x;
            res += min(b / 2, f) * c;
            cout << res << "\n";
        }
        else
        {
            int x = min(b / 2, f);
            res += x * c;
            b -= 2 * x;
            res += min(b / 2, p) * h;
            cout << res << "\n";
        }
    }
    return 0;
}