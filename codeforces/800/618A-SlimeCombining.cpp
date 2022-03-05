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
int ar[300009];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a, b, c, i, j, k = 0;
    cin >> a;
    while (a > 0)
    {
        ar[++k] = (a % 2);
        a = a / 2;
    }
    for (i = k; i > 0; i--)
    {
        if (ar[i] == 1)
        {
            cout << i << " ";
        }
    }
    return 0;
}