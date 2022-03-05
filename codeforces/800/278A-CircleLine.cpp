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
    int n,s,t,k=0,l=0;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
        cin >> a[i], l += a[i];
    cin >> s >> t;
    if (s > t)
        swap(s, t);
    for (int i = s; i < t; i++)
        k += a[i];
    cout << min(k, l - k);
    return 0;
}