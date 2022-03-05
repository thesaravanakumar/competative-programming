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
    int n,m,a=0,b=0,c=0;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cin >> m;
        if (i % 3 == 1)
            a += m;
        if (i % 3 == 2)
            b += m;
        if (i % 3 == 0)
            c += m;
    }
    if (a >= b && a >= c)
        cout << "chest";
    else if (b >= c && b >= a)
        cout << "biceps";
    else
        cout << "back";
    return 0;
}