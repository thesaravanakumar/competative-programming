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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    int ans = 0;
    while (!a.empty() && a.back() <= k)
    {
        ++ans;
        a.pop_back();
    }
    reverse(a.begin(), a.end());
    while (!a.empty() && a.back() <= k)
    {
        ++ans;
        a.pop_back();
    }
    cout << ans << endl;
    return 0;
}