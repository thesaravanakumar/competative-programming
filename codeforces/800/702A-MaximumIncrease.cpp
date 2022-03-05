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

    int n, mx = 1, c = 1;
    cin >> n;
    int a[n];cin>>a[0];
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > a[i - 1])
        {
            c++;
            mx = max(mx, c);
        }
        else
            c = 1;
    }
    cout << mx;
    return 0;
}