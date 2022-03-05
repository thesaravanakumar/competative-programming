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
    long long int n, l, r, min, max;
    cin >> n >> l >> r;
    min = pow(2, l) + n - l - 1;
    max = pow(2, r - 1) * (2 + n - r) - 1;
    cout << min << " " << max;
    return 0;
}