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
    int n, a, b, c, d, s[1000], m = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b >> c >> d;
        s[i] = a + b + c + d;
        if (s[1] < s[i])
            m++;
    }
    cout << m;
}