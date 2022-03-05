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
    int a, b, x;
    cin >> a >> b;
    x = a < b ? a : b;
    int s = 1;
    while (x)
    {
        s = s * x;
        x = x - 1;
    }
    cout << s;
}